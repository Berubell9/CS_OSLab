#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <sys/types.h>
#include <unistd.h>
int notDone = 1;
int cnt = 0;
void mySIGhandler(int sig) {
    signal(SIGALRM, SIG_IGN);
    notDone = 0;
    //printf("loop should break\n");
}

int main(void) {
    signal(SIGALRM, mySIGhandler);
    pid_t pid = fork();
    if (pid == 0) {
        sleep(4);
        printf("sending SIGALRM\n");
        kill(getppid(), SIGALRM);
        exit(0);
        // printf("Child created");
        // while(1);
        // printf("this line should not be \n");
    }
    else {
        printf("parent wait for SIGALRM\n");
        while (notDone) {
            cnt++;
        }
            
    }
    printf("it takes %d\n",cnt);
    return 0;
}