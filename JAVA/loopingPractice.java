import java.util.*;

public class loopingPractice {
    public static void main(String[] args) {
        // Bus Ticket Reservation Counter
        // A bus has 40 seats. Allow users to book seats one by one until all are full
        // (loop until no seats left).
        // Print seat numbers booked.
        Scanner sc = new Scanner(System.in);
        System.out.println("Welcome to PUNJAB ROADWAYS!!");

        int busTickets = 40;

        for (int i = 0; i <= 40; i++) {

            System.out.print("Enter the Number of tickets you want to book: ");
            int customerTicket = sc.nextInt();
            if (busTickets == 0) {
                System.out.println("Sorry ! All Seats are booked");
                break;
            } else {
                System.out.println("You can book more tickets!!");
                busTickets = busTickets - customerTicket;
                System.out.println("Number of tickets left: " + busTickets);
            }
        }

    }
}
