import java.io.*;

public class WriteFile {
    public static void main(String arg[])throws Exception
    {
        FileOutputStream fobj = new FileOutputStream("Marvellous1.txt");

        String Data ="Marvellous Infosystems Pune";

        byte bdata[] = Data.getBytes();

        fobj.write(bdata);
        fobj.close();

    }
}
