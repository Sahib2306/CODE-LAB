// Write a program that takes 10 integers from the user and counts how many are even and how many are odd.

package ChatGpt;

import java.util.Scanner;
public class Q1 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        byte number;
        byte oddCount=0;
        byte evenCount = 0;

        for(int i = 1; i<=10;i++){
            System.out.print("Enter number "+i+" : ");
            number = input.nextByte();
            if(number%2==0){
                evenCount++;
            }
            else{
                oddCount++;
            }
        }
        System.out.println("Even numbers Are: "+evenCount);
        System.out.println("Odd numbers Are: "+oddCount);
        
    }
}
