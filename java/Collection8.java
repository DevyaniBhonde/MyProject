import java.util.*;

public class Collection8 {
    public static void main(String arg[]) {
        Hashtable<String, Integer> hobj = new Hashtable<String, Integer>();

        hobj.put("PPA", 18000);
        hobj.put("LB", 17000);
        hobj.put("Python", 16500);
        hobj.put("LSP", 21000);

        // System.out.println("Element in the hashtable is :"+hobj);
        // System.out.println("Element in the hashtable is :"+hobj.keys());
        System.out.println(hobj.get("Python"));
        Enumeration eobj = hobj.keys();

        hobj.remove("LSP");
        while (eobj.hasMoreElements()) {
            System.out.println("Value is " + eobj.nextElement());
        }

    }
}
