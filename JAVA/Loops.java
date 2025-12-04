public class Loops {
    public static void main(String[] args) {
        // while loop
        byte i = 0;
        while(i<5){
            System.out.println(i);
            i++;
        }
        
        // Do-While loop
        byte n = 0;
        do{
            System.out.println(n);
            i++;
        }
        while(n>5);

        // For Loop
        int sum = 0;
        for(int s = 0;s<10;s++){
            sum+=s;

        }
        System.out.println(sum);
    }
}
