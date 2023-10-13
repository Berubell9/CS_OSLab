all: Lab9_q1
Lab9_q1: Lab9_q1.o q1.o
	gcc -o Lab9_q1 Lab9_q1.o q1.o
Lab9_q1.o: Lab9_q1.c
	gcc -c Lab_q1.c
q1.o: q1.c
	gcc -c q1.c
clean:
	rm -rf *.o Lab9_q1
