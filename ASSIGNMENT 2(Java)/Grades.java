import java.util.Scanner;
public class Grades
{
    public static void main(String args[])
    {
        int mark;
        System.out.println("Enter the Mark : ");
        Scanner sc = new Scanner(System.in);
        mark = sc.nextInt();	
if(mark>=90)
            {
                 System.out.println("The grade is A");
            }
            else if(mark>=80&&mark<90)
            {
                System.out.println("The grade is B");

            }
            else if(mark>=60&&mark<80)
            {
                 System.out.println("The grade is C");

            }
            else if(mark>=45&&mark<60)
            {
                System.out.println("The grade is D");
            }
            else
            {
                 System.out.println("The grade is fail");

            }
    }
}
 