
public class GenericMethod {
  public static <T> void Display(T Arr[])
  {
      for(int i = 0;i < Arr.length;i++)
      {
        System.out.print(Arr[i]+" ");
      }
  }
    public static void main(String arg[])
    {
        Integer iArr[] = {10,20,30,40};
        Display(iArr);

       Character cArr[] = {'a','b','c','d','e'};
        Display(cArr);

        Float fArr[] = {10.5f,45.6f,70.5f,53.2f};
        Display(fArr);
    }
}
