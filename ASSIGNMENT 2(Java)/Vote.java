import java.util.Scanner;
public class Vote
{
    public static void main(String args[])
    {
        int age;
        System.out.println("Enter the Age : ");
        Scanner sc = new Scanner(System.in);
        age = sc.nextInt();	
if(age>=18)
        {
            System.out.println("The Person is eligible for vote");
        }
      else
        {
            System.out.println("The Person is not eligible for vote");
        }
    }
}
 