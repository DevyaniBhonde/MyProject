
import java.util.*;


public class Collection6 {
    public static void main(String arg[])
    {
        Vector<Float>aobj = new Vector<Float>();
        aobj.add(10.06f);
        aobj.add(20.06f);
        aobj.add(30.06f);
        aobj.add(40.06f);
        aobj.add(50.06f);

        Iterator iobj = aobj.iterator();
        while(iobj.hasNext())
        {
            System.out.println(iobj.next());
        }

        aobj.clear();
    }
}
