
class Base
{
    public int A,B;
    public Base()
    {
        System.out.println("Base constructor");
        this.A = 10;
        this.B = 15;
    }

    public void fun()  // Defination
    {
        System.out.println("Inside Base fun");
    }
    public void gun()  // Defination
    { 
        System.out.println("Inside Base gun");
    }
    public void fun(int iNo)  //Overloaded Defination
    {
        System.out.println("Inside Base fun with one integer");
    }
}

class Derived extends Base  //class Derived:public Base
{
    public int X,Y;
    public Derived()
    {
        System.out.println("Derived Constructor");
        this.X = 30;
        this.Y = 40;
    }
    public void sun()  // Defination
    {
        System.out.println("Inside Derived sun");
    }
    public void gun()   // Overrided Defination
    {
        System.out.println("Inside Derived gun");
    }
    

}
public class Single
{
    public static void main(String arg[])
    {
       // Base bobj1 = new Base();
        Derived dobj1 = new Derived();
       // Base bobj1 = new Derived();
       //Derived dobj2 = new Base();//not allowed

       dobj1.fun();
       dobj1.fun(11);
       dobj1.gun();//it will call gun of derived bcoz object is created of derived class own
       dobj1.sun();
    }

}