import java.util.Scanner;

public class stringupper 
{
    private static Scanner myScanner;
    public static void main(String[] args) 
    {
        String myString;
	myScanner= new Scanner(System.in);

	System.out.print("\nPlease Enter String =  ");
	myString = myScanner.nextLine();
	
	String upString = myString.toUpperCase();	
	System.out.println("\nThe Uppercase String  =  " + upString);
    }
}
