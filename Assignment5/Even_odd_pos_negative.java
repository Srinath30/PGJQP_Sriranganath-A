package Assignment5;
import java.util.Scanner;
public class Even_odd_pos_negative
{
   //A method for reverse
	

   public static void Check_even_odd(int num) {

		System.out.println("Enter the numbers: ");
		Scanner sc = new Scanner(System.in);
		num=sc.nextInt();
		if(num%2==0)
		{
			System.out.print("Even");
		}
		else
		
			{
				System.out.print("Odd");
			}

	
   }
   public static void Check_positive_negative(int num) {
		System.out.println("\nEnter the numbers: ");
		Scanner sc = new Scanner(System.in);
		num=sc.nextInt();
		if(num>0)
		{
			System.out.print("The number is positive");
		}
		else
		
			{
				System.out.print("The number is negative");
			}

   }
   public static void main(String args[])
   {
	   Even_odd_pos_negative e1=new Even_odd_pos_negative();
	    e1.Check_even_odd(5);
	    e1.Check_positive_negative(5);


   }

	}