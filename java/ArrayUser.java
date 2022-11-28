import java.util.*;

public class ArrayUser {
    public static void main(String arg[])
    {
        int iCnt = 0;
        int iSum = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter the size of array : ");
        int iSize = sobj.nextInt();
        
       // int Arr[] = (int *)malloc(iSize * sizeof(int)); // In c lanaguage 
        int Arr[] = new int[iSize];         

        System.out.println("Number of elemnets in the array are : "+Arr.length);
        
        System.out.println("Enter the element of array: ");
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt]=sobj.nextInt();
        }

        System.out.println("Element of the array are :");
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.println(Arr[iCnt]);
        }

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            iSum = iSum + Arr[iCnt];
        }
        System.out.println("Sum of the array is :"+iSum);
        sobj.close();
}    
}