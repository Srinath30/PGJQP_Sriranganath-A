import java.util.Scanner;
class Day
{
    public static void main(String args[])
    {
        int choice;
        System.out.print("Enter your choice : ");
        Scanner sc = new Scanner(System.in);
        choice = sc.nextInt();
switch(choice)
        {
            case 1: System.out.print("sunday");break;
            case 2: System.out.print("monday");break;
            case 3: System.out.print("tuesday");break;
            case 4: System.out.print("wednesday");break;
            case 5: System.out.print("thursday");break;
            case 6: System.out.print("friday");break;
            case 7: System.out.print("saturday");break;
        default: System.out.print("invalid choice");

        }
}
}
