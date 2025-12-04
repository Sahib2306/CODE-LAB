import java.util.*;
public class BillGenerator {
    public static void main(String[] args) {
        // Electricity Bill Calculator
        // Take meter readings for multiple months in a loop and calculate the bill for
        // each month based on
        // slab rates.
        Scanner sc= new Scanner(System.in);
        float userBill= 0;
        int month = 0;
        
        
        for(int i =1;i<=12;i++){
            System.out.print("Enter your month " + i +" reading here: ");
            float userReading = sc.nextFloat();
            month++;
            userBill=userBill+userReading;
            if(userReading<0){
                System.out.println("You have input wrong details: ");
                System.out.println("Your total bill for "+ month+" months is : "+userBill);
            }

        }
        System.out.println("Your total bill for "+ month+" is : "+userBill);


    }
}
