import java.util.Scanner;

public class countchars 
{
    private static Scanner myScanner;
    public static void main(String[] args) 
    {
        String charcount;
        int count = 0;

        myScanner= new Scanner(System.in);

        System.out.print("\nPlease Enter a String to Count =  ");
        charcount = myScanner.nextLine();

        for(int i = 0; i < charcount.length(); i++)
        {
            if(charcount.charAt(i) != ' ') 
            {
                count++;
            }
        }		
        System.out.println("\nThe Total Number of Characters  =  " + count);
    }
}