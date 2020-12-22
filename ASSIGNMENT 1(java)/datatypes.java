import java.util.Scanner;
class Type
{
public static void main(String[] args)
{
int n1;
char n2;
float n3;
System.out.println("Enter a Number:");
Scanner sc=new Scanner(System.in);
n1=sc.nextInt();
System.out.println("Enter a Character:");
Scanner sa=new Scanner(System.in);
n2=sa.next().charAt(0);
System.out.println("Enter a Float number:");
Scanner sb=new Scanner(System.in);
n3=sb.nextFloat();
System.out.println("The Number is "+(n1));
System.out.println("The character is "+(n2));
System.out.println("The decimal number is "+(n3));
}
}
 


