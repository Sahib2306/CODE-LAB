// Whether the number entered by the user is ODD or EVEN

package Questions;

import java.util.Scanner;

public class Question_06 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        byte number = sc.nextByte();

        if(number%2==0){
            System.out.println("the number is even! ");
        }
        else{
            System.out.println("the number is odd! ");
        }
    }
}
