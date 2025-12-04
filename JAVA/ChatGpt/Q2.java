// Sum of N Natural Numbers
package ChatGpt;

import java.util.Scanner;

public class Q2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter A number to get sum of n numbers");
        byte n= sc.nextByte();
        int sum = 0;
        for(int i =0 ;i<=n;i++){
            sum+=i;
        }
        System.out.println(sum);

    }
}
