import java.util.*;

public class Collection5 
{    
    public static void main(String arg[])
    {
        ArrayList <Float>aobj = new ArrayList<Float>();

        aobj.add(10.06f);
        aobj.add(20.06f);
        aobj.add(30.06f);
        aobj.add(40.06f);
        aobj.add(50.06f);

        aobj.add(2,100.60f);
        aobj.add(6,200.60f);
        
        Iterator iobj = aobj.iterator();
        while(iobj.hasNext())
        {
            System.out.println(iobj.next());
        }

        aobj.clear();
    }
}
