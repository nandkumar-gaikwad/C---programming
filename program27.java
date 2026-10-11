import java.util.Scanner;
public class program27 {
    public static void main(String A[])
    {
            Scanner scanner = null;
            String sName =null;
            int iAge = 0;
            float fMarks = 0.0; // error
            System.out.println("Enter a nume");
 
            scanner = new Scanner(System.in);
            sName = scanner.next();
            System.out.println("Enter you name");
            iAge = scanner.nextInt();
            System.out.println("Enter your marks:");
            fMarks = scanner.nextfloat();
            System.out.println("Welcome"+sName);
            System.out.println("Your age is  :"+iAge);
            System.out.println("Your marks "+fMarks);



    }
    
}
