import java.util.Scanner;

public class isaleapyear 
{
    private static Scanner myScanner;
    public static void main(String[] args) 
    {
        
        int year;
        // get user input
        myScanner= new Scanner(System.in);
        year = myScanner.nextInt();
 
        // condition check
        if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0))) 
        {        
            // true- Print leap year
            System.out.println(year + " : Leap Year");
        }
        else 
        {
            // false- Print Non-leap year
            System.out.println(year + " : Non - Leap Year");
        }
    }
}
