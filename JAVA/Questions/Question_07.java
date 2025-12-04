// Write a Java program that takes a student’s score (0–100) and prints their grade

package Questions;

import java.util.Scanner;

public class Question_07 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter Your Marks : ");
        byte marks = sc.nextByte();
        
        if(marks>=90 && marks<101){
            System.out.println("Grade A!");
        }
        else if (marks>=80 && marks<90) {
            System.out.println("Grade B!");
        }
        else if (marks>70 && marks<80) {
            System.out.println("Grade C");
        }
        else if (marks > 60 && marks<70) {
            System.out.println("Grade D");
        }
        else{
            System.out.println("Fail!");
        }
    }
}
