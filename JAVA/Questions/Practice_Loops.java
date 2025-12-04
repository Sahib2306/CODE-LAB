package Questions;

public class Practice_Loops {
    public static void main(String[] args) {
        // q1
        for (int i = 4; i >= 0; i--) {
            for (int j = 1; j <= i; j++) {
                System.out.print("*");
            }
            System.out.println();
        }

        // Q2
        byte n = 100;
        int sum = 0;
        while (n >= 0) {
            if (n % 2 == 0) {
                sum += n;
            }
            n--;
        }
        System.out.println(sum);

        // Q3
        int m=10;
        for(int i=10;i<=10;i++){
            System.out.printf("10*%d=%d\n",i,i*m);
        }

         // Q4
        int a=10;
        for(int i=10;i>=1;i--){
            System.out.printf("10*%d=%d\n",i,i*a);
        }

    }
}
