import java.util.Scanner;
public class Input {

    public static void main(String [] args) {
        System.out.println("TAKING INPUT FROM THE USER");
        Scanner S =new Scanner(System.in);
        System.out.print("Enter a number:");
        int a = S.nextInt();
        System.out.println(a);
        System.out.print("Enter A number: ");
        float b= S.nextFloat();
        System.out.println(b);

    }
}