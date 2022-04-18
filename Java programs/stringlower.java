import java.util.Scanner;

public class stringlower 
{
    private static Scanner myScanner;
    public static void main(String[] args) 
    {
        String myString;
	myScanner= new Scanner(System.in);

	System.out.print("\nPlease Enter String =  ");
	myString = myScanner.nextLine();
	
	String lowString = myString.toLowerCase();	
	System.out.println("\nThe Lowercase String  =  " + lowString);
    }
}