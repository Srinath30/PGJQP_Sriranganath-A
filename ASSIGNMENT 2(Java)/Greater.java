import java.util.Scanner;
public class Greater
{
    public static void main(String args[])
    {
        int num;
        System.out.println("Enter the Number : ");
        Scanner sc = new Scanner(System.in);
        num = sc.nextInt();	
if(num>10)
        {
            System.out.println("The Number is Greater than 10");
        }
      else
        {
            System.out.println("The Number is not Greater than 10");
        }
    }
}
 