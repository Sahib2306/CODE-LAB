// Asks user to enter his/her name .. And greet the user with "hello <name>, have a good day " text

package Questions;

import java.util.Scanner;
public class Question_03 {
    public static void main(String[] args) {
        Scanner name= new Scanner(System.in);
        System.out.print("Enter Your Name : ");
        String n = name.next();
        System.out.println("Hello "+ n +" Have a Good Day");
    }
}
