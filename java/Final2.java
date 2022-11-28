
class Base
{
    public void fun()
    {
        System.out.println("Base fun");
    }
    public final void gun()
    {
        System.out.println("Base gun");
    }
}
class Derived extends Base
{
    public void fun()
    {
        System.out.println("Base fun");
    }
   /*  public final void gun() //cant override
    {
        System.out.println("Base gun");
    }*/
}
public class Final2
{
    public static void main(String arg[])
    {
        Base bobj = new Derived();
        
    }
}
