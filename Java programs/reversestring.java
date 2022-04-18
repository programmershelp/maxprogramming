public class reversestring 
{
    public static void main(String[] args) 
    {
        String myString = "maxprogramming";
        //print string
	System.out.println(myString);
        //reverse the string
	StringBuilder myStringBuilder = new StringBuilder(myString);
	myStringBuilder.reverse();
        //print string
	System.out.println(myStringBuilder);
    }
}