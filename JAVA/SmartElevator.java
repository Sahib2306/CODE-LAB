import java.util.*;
public class SmartElevator {
    public static void main(String[] args) {
        // Smart Elevator Control Simulation
        // a. A building has 10 floors.
        // b. Loop until 50 ride requests are processed.
        // c. Use branching to decide:
        // i.
        // If request is UP and current floor < destination → Move up.
        // ii.
        // iii.
        // If request is DOWN and current floor > destination → Move down.
        // If already on the same floor → No movement.
        // d. Stop when max trips = 50 or system overload occurs.
        Scanner sc =new Scanner(System.in);
        int trips = 50;
        int floor =10;
        int userTrip;
        int currentFloor=1;
        System.out.println("Welcome to Smart Elevator");
        while(true){
            System.out.print("Which Floor U want to go? ");
            userTrip = sc.nextInt();
            if(userTrip>currentFloor){
                trips--;
                currentFloor= userTrip;
                System.out.println("trips left: "+trips);
                System.out.println("Your Current Floor is :"+currentFloor);
            }
            else if(userTrip<currentFloor){
                trips--;
                currentFloor=userTrip;
                System.out.println("trips left: "+trips);
                System.out.println("Your Current Floor is :"+currentFloor);
            }
            else if(trips==0){
                System.out.println("Your Rides for today are finished ! comeback tomorrow");
                break;
            }
            else {
            System.out.println("Enter right floor");
            break;}
        }
    }
}
