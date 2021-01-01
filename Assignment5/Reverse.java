package Assignment5;
import java.util.Scanner;
class Reverse
{
   //A method for reverse
	
   public static void Display_reverse(int num) {
		int rev=0,rem;
		System.out.println("Input your number and press enter: ");
		Scanner sc = new Scanner(System.in);
		num = sc.nextInt();
	     while(num>0)
	     {
	         rem=num%10;
	         rev=rev*10+rem;
	         num=num/10;
	     }
		System.out.print("Reverse of the input number is:"+rev);
   }
   public static void main(String args[])
   {
Reverse r1=new Reverse();
r1.Display_reverse(20);

   }

	}


