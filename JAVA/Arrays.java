import java.util.Scanner;
public class Arrays {
    public static void main(String[] args) {
        System.out.println("Array");
        int[] marks = new int[5];
        marks[1] = 69;
        System.out.println(marks[1]);

        int[] number = { 10, 2, 3, 56, 69 };
        System.out.println(number[4]);
        // printing an array using for loop
        for (int i = 0; i < number.length; i++) {
            System.out.println(number[i]);
        }
        // printing an array using for each loop
        for (int i : number) {
            System.out.println(i);
        }
        // write a code to print reverse array
        float[] reverse = { 10.5f, 20.5f, 30, 40.5f };
        for (int i = reverse.length - 1; i >= 0; i--) {
            System.out.println(reverse[i]);
        }
        // Array input through user

        Scanner sc = new Scanner(System.in);
        int [] input= new int [5];
        System.out.println("enter 5 numbers");
        for(int i =0;i<input.length;i++){
            input[i] = sc.nextInt(); 
        }

        for (int i : input) {
            System.out.println("{"+i+'}');
        }

    }
}
