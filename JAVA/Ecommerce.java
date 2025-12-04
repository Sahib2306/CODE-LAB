import java.util.*;

public class Ecommerce {
   
    public static void main(String[] args) {
        float cart = 0;
        float user_price;
        Scanner sc = new Scanner(System.in);
        System.out.println("WELCOME TO JAVA ECOMMERCE WEBSITE");
        while (true) {
            
        
        System.out.println("1.Electronics\nAbove $50,000 -> 15% discount \r\n" + //
                        "o $20,000 - $50,000 -> 10% discount \r\n" + //
                        "o Below $20,000 -> 5% discount\n2.Clothing\nAbove $10,000 -> 20% discount \r\n" + //
                                                        "o $5,000 - $10,000 -> 10% discount \r\n" + //
                                                        "o Below $5,000 -> 5% discount\n3.Groceries\n Flat 5% discount on all purchases.\n4.Exit ");
        System.out.print("What Category u like: ");
        int user =sc.nextInt();
        if(user==4){
            System.out.println("Final Cart Price is = "+cart);
            break;
        }
        
        else if(user==1){
            System.out.print("Enter your shopping price for Electronics: ");
            user_price = sc.nextFloat();
            cart= cart+user_price;
            if(user_price>50000){
                cart = cart-(cart*15/100);
            }
            else if(user_price>20000 && user_price<50000){
                cart = cart-(cart*10/100);
            }
            else if(user_price<20000){
                cart = cart-(cart*5/100);
            }
            else
            System.out.println("Enter valid amount");
            System.out.println(cart);
        }
        else if(user==2){
            System.out.print("Enter your shopping price for Clothing: ");
            user_price = sc.nextFloat();
            cart= cart+user_price;
            if(user_price>10000){
                cart = cart-(cart*20/100);
            }
            else if(user_price>5000 && user_price<10000){
                cart = cart-(cart*10/100);
            }
            else if(user_price<5000){
                cart = cart-(cart*5/100);
            }
            else
            System.out.println("Enter valid amount");
            System.out.println(cart);
        }
        else if(user==3){
            System.out.print("Enter your shopping price for Groceries: ");
            user_price = sc.nextFloat();
            cart= cart+user_price;
            if(user_price>0){
                cart = cart-(cart*5/100);
            }
            else
            System.out.println("Enter valid amount");
            System.out.println(cart);
        }
    }
        
    }
}
