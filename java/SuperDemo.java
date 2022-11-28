
class Base
{
    public int A,B;
    public Base(int iNo1,int iNo2)
    {
        this.A = iNo1;
        this.B = iNo2;
    }
    public void fun()
    {
        System.out.println("Inside Base fun");
        System.out.println("Value of A from fun method is :"+this.A);
    }

}

class Derived extends Base
{
    public int X,Y;
    public Derived(int iNo1,int iNo2,int k,int l)
    {
      super(k,l); //1 usecase
      this.X = iNo1;
      this.Y = iNo2;
    } 
    public void gun()
    {
        System.out.println("Value of A from gun method is :"+super.A);//2 usecase
       // super.fun(); //3 usecase
    }

}

public class SuperDemo
{
    public static void main(String arg[])
    {
        Derived dobj = new Derived(11,10,21,20);
        //dobj.fun();
        dobj.gun();
    }
}
