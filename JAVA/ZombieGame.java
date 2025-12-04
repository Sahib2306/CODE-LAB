import java.util.*;
public class ZombieGame {
   String name;
   static  int level=1;
   int health;
   static String userTheme;
    ZombieGame(){
        name ="Unknown";
        level=1;
        health =100;
        System.out.println("PLayer name is: "+name+ " Level is : "+level+" And player health is : "+health);

    }
    ZombieGame(String playerName){
        name =playerName;
        level=1;
        health =100;
        System.out.println("PLayer name is: "+name+ " Level is : "+level+" And player health is : "+health);

    }
    ZombieGame(int l,String t){
        level =l;
        userTheme=t;
        System.out.println("Your level is: "+level+" and diffculty is: "+userTheme);
    }
    
    public static void main(String[] args) {
        Scanner sc =new Scanner(System.in);

        ZombieGame z =new ZombieGame();
        System.out.println("*****Welcome To Zombie Game*****");
        System.out.print("Enter Player name: ");
        String userName = sc.nextLine();
        System.out.println("In Which theme you want to play the game?\n1.Forest=Easy\n2.Desert=Medium\n3.Volcano=Hard");
        System.out.print("Enter Your Theme :");
        userTheme= sc.nextLine();

        if(userTheme.equals("Forest")){
            z= new ZombieGame(userName);
            z.userTheme="easy";
            z= new ZombieGame(1,userTheme); 
        }
        
    }
}
