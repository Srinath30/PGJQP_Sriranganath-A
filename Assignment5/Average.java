package Assignment5;
import java.util.Scanner;
public class Average
{
   //A method for reverse
	

   public static void Display(int average) {
		int num1,num2,num3,num4,num5;
		System.out.println("Enter the numbers: ");
		Scanner sc = new Scanner(System.in);
		num1=sc.nextInt();
		num2=sc.nextInt();
		num3=sc.nextInt();
		num4=sc.nextInt();
		num5=sc.nextInt();
		System.out.print("The Average is:"+(num1+num2+num3+num4+num5)/5);
	
   }
   public static void main(String args[])
   {
Average a1=new Average();
a1.Display(5);
System.out.println("\nThe average is greater than 100");


   }

	}