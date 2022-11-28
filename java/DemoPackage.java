import java.util.*;   //Inbuilt Package
import Marvellous.Arithmetic; //User defined package
import Marvellous.PPA.Loops;

class DemoPackage {
    public static void main(String arg[])
    {
       Scanner sobj = new Scanner(System.in);

       System.out.println("Enter first number");
       int iNo1  = sobj.nextInt();

       System.out.println("Enter second number");
       int iNo2 = sobj.nextInt();

       Arithmetic aobj =new Arithmetic(iNo1, iNo2);

       int iResult = aobj.Addition();
       System.out.println("Addition is : "+iResult);

       iResult = aobj.Subtraction();
       System.out.println("Subtraction is : "+iResult);
       
       Loops lobj = new Loops();
       lobj.Display();
    }
}
