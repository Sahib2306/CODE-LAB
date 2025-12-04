
// Rock paper Scissor game
import java.util.Random;
import java.util.Scanner;

public class RockPaperScissors {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Random r = new Random();

        System.out.println("ROCK PAPER SCISSOR GAME ");
        System.out.println("Choose \n1.Rock\n2.Paper\n3.Scissor");
        byte human = sc.nextByte();
        

        // 1.Rock\n2.Paper\n3.Scissor
        int computer = r.nextInt(3) + 1;

        if (human == computer) {
            System.out.println("draw!");
        } else if ((human == 1 && computer == 3) ||
                (human == 2 && computer == 2) ||
                (human == 3 && computer == 1)) {
            System.out.println("You win!");

        } else if (human >= 1 && human <= 3) {
            System.out.println("Computer wins!");

        } else {
            System.out.println("Choose valid option!");
        }
    }
}