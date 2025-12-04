// Write a program to calculate the factorial of a number n input by the user.
package ChatGpt;

import java.util.Scanner;
public class Q3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number to check the factorial: ");
        int n = sc.nextInt();
        int fact = 1;

        for(int i = 1;i<=n;i++){
            fact*=i;
        }
        System.out.println("factorial: "+fact);
    }
}
