package Assignment5;
import java.util.Scanner;
public class Calculator {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
int num1,num2,choice;

System.out.println("Enter your choice, 1.Addition 2.Subtraction 3.Multiplication 4.Division");
Scanner sc=new Scanner(System.in);
choice=sc.nextInt();
System.out.println("Enter two numbers");
num1=sc.nextInt();
num2=sc.nextInt();
switch(choice)
{
case 1:System.out.println("The Addition of two numbers is:"+(num1+num2)); break;
case 2:System.out.println("The Subtraction of two numbers is:"+(num1-num2)); break;
case 3:System.out.println("The Multiplication of two numbers is:"+(num1*num2)); break;
case 4:System.out.println("The Division of two numbers is:"+(num1/num2)); break;
default:System.out.println("Invalid choice");
}

	}

}
