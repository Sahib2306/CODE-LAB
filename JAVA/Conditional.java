import java.util.Scanner;

public class Conditional {
    public static void main(String[] args) {
        // if else statement 
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter Your Age : ");
        byte age = sc.nextByte();

        if(age>=18){
            System.out.println("You are Eligible to Vote, because you are adult now ");
        }
        else{
            System.out.println("You are not Eligible to Vote , because you are under age i.e "+age+"year old");
        }

        // Switch Case to check which day is in the week according to number entered by the user

        System.out.print("Enter number (1-7) : ");
        byte day= sc.nextByte();
        switch (day) {
            case 1:
                System.out.println("monday");
                break;

            case 2:
                System.out.println("tuesday");
                break;
        
            case 3:
                System.out.println("wednesday");
                break;

            case 4:
                System.out.println("thursday");
                break;

            case 5:
                System.out.println("friday");
                break;

            case 6:
                System.out.println("saturday");
                break;

            case 7:
                System.out.println("sunday");
                break;

            default:
                System.out.println("Enter valid number! ");
                break;
        }

        // Short Hand If else

        int  marks = 89;
        String result = (marks>33) ? "PASS! " : "FAIL";
        System.out.println(result); 
    
        

    }
}
