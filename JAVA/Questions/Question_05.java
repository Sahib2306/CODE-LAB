// Write a Java program to check whether the user has input a integer or not

package Questions;

import java.util.Scanner;
public class Question_05 {
    public static void main(String[] args) {
        Scanner i = new Scanner(System.in);
        System.out.print("Enter A number: ");
        System.out.println(i.hasNextInt());

    }
}
