// java Program to make simple calculator


package Questions;

import java.util.Scanner;

public class Question_08 {
    public static void main(String[] args) {
        System.out.println("**********  JAVA CALCULATOR **********");
        Scanner var = new Scanner(System.in);
        System.out.print("Enter number 1: ");
        float num1 = var.nextFloat();
        System.out.print("Enter number 2: ");
        float num2 = var.nextFloat();

        System.out.print("Choose operator\n1. +\n2.-\n3.*\n4./: ");
        byte operation = var.nextByte();
        
        switch (operation) {
            case 1:
                
                System.out.println(num1+num2);
                break;
            
            case 2:
                System.out.println(num1-num2);
                break;
            case 3:
                System.out.println(num1*num2);
                break;

            case 4:
                System.out.println(num1/num2);
                break;
            
            default:
                System.out.println("Choose valid operator");
                break;
        }
    }
}
