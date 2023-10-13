import java.util.ArrayList;
public class DemoGenericArrayList {
    public static void main(String [] args) {
        ArrayList<Element> al = new ArrayList<Element>();
        al.add(new Element(6007)); al.add(new Element(7777));
        System.out.println(al.toString());
        Element e = (Element)al.remove(0);
        System.out.println(e.getVal());
        System.out.println(al.toString());
    } //60 [Element@4926097b, Element@762efe5d]
}     //80 6007
      //90 [Element@762efe5d]