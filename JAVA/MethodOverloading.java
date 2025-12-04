import java.util.*;

public class MethodOverloading {
    // static int calculateBill(int price,int quantity){
    //     int bill = quantity*price;
    //     return bill;

    // }
    // static int calculateBill(int price,int quantity,double discount){
    //     int bill=quantity*price;
    //     double d = bill-(bill*discount/100);
    //     return(int) d;

    // }
    // static int calculateBill(int price){
    //     return price;
    // }
    // public static void main(String[] args) {
    //     int bill = calculateBill(50, 6);
    //     System.out.println(bill);
    //     int billDiscount = calculateBill(600,5,2.5);
    //     System.out.println(billDiscount);
    //     int price = calculateBill(600);
    //     System.out.println("Your Total Price is: "+price);
    // }

    void bookTicket(String destination){
        System.out.println("Your Ticket is booked Till "+destination);
    }
    void bookTicket(String source,String destination){
        System.out.println("Your ticket is booked from "+source+" to "+destination);
    }
    void bookTicket(String source,String destination,int passenger){
        System.out.println("Your ticket is booked from "+source+" to "+destination+ " and no of tickets booked are: "+passenger);
    }
    public static void main(String[] args) {
        MethodOverloading obj = new MethodOverloading();
        obj.bookTicket("Jalandhar");
        obj.bookTicket("Jalandhar","Bareilly");
        obj.bookTicket("jalandhar", "Bareilly", 2);
    }
}
