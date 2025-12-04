package ChatGpt;

public class ArmstrongNumber {
    public static void main(String[] args) {
       int n = 153;
        int original = n;   // store original to compare later
        int sum = 0;

        while(n != 0){
            int digit = n % 10;                // get last digit
            sum += digit * digit * digit;      // cube and add
            n = n / 10;                        // remove last digit
        }

        System.out.println("Sum of cubes: " + sum);
        
        if(original == sum){
            System.out.println(original + " is an Armstrong number");
        } else {
            System.out.println(original + " is not an Armstrong number");
        }

    }
}
