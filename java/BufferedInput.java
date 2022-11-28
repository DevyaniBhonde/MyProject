import java.io.*;

public class BufferedInput 
{
    public static void main(String arg[]) 
    {
        InputStreamReader iobj =new InputStreamReader(System.in);
        BufferedReader bobj = new BufferedReader(iobj);
        //same as above 7,8 syntax
        //  BufferedReader bobj = new BufferReader(new InputStreamReader(System.in));
        String name = null;
        int age = 0;
        float marks = 0.0f;

    try
   {
        System.out.println("Enter ypur Name :");
        name = bobj.readLine();
        
        System.out.println("Enter your age:");    
        age = Integer.parseInt(bobj.readLine());

        System.out.println("Enter your marks :");
        marks = Float.parseFloat(bobj.readLine());
   }
   catch(IOException obj)
   {

   }    
        System.out.println("Name :" +name);
        System.out.println("Age :"+age);
        System.out.println("Marks : "+marks);

    }

    
}
