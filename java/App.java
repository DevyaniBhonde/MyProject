import java.sql.*;

public class App
{
    public static void main(String arg[]) throws Exception
    {
        String URL = "jdbc:mysql://localhost:3306/school";
        String Username = "root";
        String Password = "";
        String Query = "select * from teacher";
        
        Connection cobj = DriverManager.getConnection(URL,Username,Password);

        Statement sobj = cobj.createStatement();

        ResultSet robj = sobj.executeQuery(Query);

        while(robj.next())
        {
            System.out.println("Id : "+robj.getInt("Id"));
            System.out.println("Name : "+robj.getString("Name"));
            System.out.println("Department : "+robj.getString("Department"));
            System.out.println("Age : "+robj.getInt("Age"));
            System.out.println("City : "+robj.getString("City"));
                                                
        }

    }
}

