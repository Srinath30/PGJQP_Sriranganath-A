package Assignment5;
import java.util.Scanner;
public class Power
{
   //A method for reverse
	

   public static void Display_power(int exponent) {
		float base,result=1;
		System.out.println("Enter base and power respectively: ");
		Scanner sc = new Scanner(System.in);
		base= sc.nextFloat();
		exponent=sc.nextInt();
	     while(exponent!=0)
	     {
	    	  result *= base;
	          --exponent;
	     }
		System.out.print("Result is:"+result);
	
   }
   public static void main(String args[])
   {
	    Power p1=new Power();
	    p1.Display_power(5);

   }

	}
