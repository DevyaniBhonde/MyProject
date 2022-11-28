class Addition{
    public int iNo1;  //Characteristic
    public int iNo2;  //Characteristic

    public Addition(){  //Default Constructor
        System.out.println("Inside Default constructor");
        iNo1=0;
        iNo2=0;
    }
    public Addition(int a,int b){  //Parameterised Constructor
        System.out.println("Inside Parameterised constructor");
        a=iNo1;
        b=iNo2;
    }
    public int Add(){  //Behaviour
        int iAns=0;
        iAns=iNo1+iNo2;
        return iAns;
    }
    public int Subtract(){  //Behaviour
        int iAns=0;
        iAns=iNo1-iNo2;
        return iAns;
    }

}//End of the class

class Math{
    public static void main(String arr[])
    {
       System.out.println("Inside main function");
        
       Addition obj1 = new Addition();
       Addition obj2 = new Addition(10,11);

       int iResult = 0;
       iResult=obj1.Add();
       System.out.println("Addition is : "+iResult);

       iResult=obj2.Add();
       System.out.println("Addition is : "+iResult);

    }
}