// Java program that converts Kilometers into Miles ... take input from user

package Questions;

import java.util.Scanner;

public class Question_04 {
    public static void main(String[] args) {
      System.out.println("CONVERTING KM INTO MILES");
      Scanner input = new Scanner(System.in);
      // formula 
      // miles = km / 1.609
      System.out.print("Enter km :");
      float km = input.nextFloat();
      double miles = km/1.609;
      System.out.println(km+" Kilometers = "+miles+" Miles!");
    }
}
