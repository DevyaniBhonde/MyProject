class Demo implements Runnable
{
     public void run()
     {
        int i = 0;
        for(i = 1;i < 10;i++)
        {
            System.out.println(i);
        }
     }

}

public  class ThreadDemo {
    public static void main(String arg[])
    {
        System.out.println("Inside main method");
        Demo obj1 = new Demo();
        Thread t1 = new Thread(obj1);
        t1.start();

        Demo obj2 = new Demo();
        Thread t2 = new Thread(obj2);
        t2.start();
        
    }
} 
