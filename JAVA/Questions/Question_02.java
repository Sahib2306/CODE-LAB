// Calculate the percentage of a student from the marks input by the user of 5 subjects
package Questions;


import java.util.Scanner;

public class Question_02 {
    public static void main(String[] args) {
        System.out.println("CBSE PERCENTAGE ");
        Scanner marks = new Scanner(System.in);
        System.out.print("Enter the marks of Subject 1: ");
        float sub1 = marks.nextFloat();
        System.out.print("Enter the marks of Subject 2: ");
        float sub2 = marks.nextFloat();
        System.out.print("Enter the marks of Subject 3: ");
        float sub3 = marks.nextFloat();
        System.out.print("Enter the marks of Subject 4: ");
        float sub4 = marks.nextFloat();
        System.out.print("Enter the marks of Subject 5: ");
        float sub5 = marks.nextFloat();


        float totalMarks = sub1 + sub2+ sub3 + sub4 +sub5 ;
        float percentage = (totalMarks/500)*100;

        System.out.println("Percentage Scored is : "+percentage);
        // System.out.println(percentage);

    }
}
