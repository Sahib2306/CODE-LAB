package Questions;

public class QuestionArray {
    public static void main(String[] args) {
        // // Create a array of 5 elements and calculate their sum
        // int [] arr = {1,2,3,4,5};
        // int sum=0;
        // for(int i=0;i<arr.length;i++){
        //     sum+=i;
        // }
        // System.out.println(sum);



        // // Write a program to find whther the given integer is present in an array or not
        // int [] arr = {1,2,3,4,5};
        // int num = 5;
        // for(int i =0;i<arr.length;i++){
        //     if(num==arr[i]){
        //         System.out.println("the integer is present in array");
        //     }
        // }



        // // calculate the avg marks from an array containing  marks of all students in physics using for each loop
        // float [] physics= {79,86,36,56,21,45,98,69,23,33};
        // int sum =  0;
        // int totalStudents  = physics.length;
        // for (float i : physics) {
        //     sum+=i;
        // }
        // float avg = (float) sum / totalStudents;
        // System.out.println(avg);



        // // create a java program to add matrices of 2*3
        // int [][] arr = {{10,25,39},{1,2,3}};
        // int sum=0;
        // for(int i =0 ;i<arr.length;i++){
        //     for(int j=0;j<arr[i].length;j++){
        //         sum+=arr[i][j];

        //     }
        // }
        // System.out.println(sum);



        // // Write a program to reverse an array
        // int [] arr= {10,20,30,40,50};
        // for(int i = arr.length-1;i>=0;i--){
        //     System.out.print(arr[i]+" ");
        // }


        // // write  a program to find the maximum element in the array

        // int [] arr = {10,20,30,40,50};
        // int max = 0;
        // for (int i : arr) {
        //     if(i>=max){
        //         max = i;
        //     }
        //     else
        //     continue;
        // }
        // System.out.println(max);



        // // write  a program to find the minimum element in the array
        // int [] arr = {10,20,30,40,50,5};
        // int min=arr[0];
        // for (int i : arr) {
        //     if (i<=min) {
        //         min =i;
        //     }
        // }
        // System.out.println(min);


        // check whether is sorted or not
        int[] arr = {10, 200, 30, 40, 50};
        boolean isSorted = true;

        for (int i = 0; i < arr.length - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                isSorted = false;
                break;
            }
        }

        if (isSorted) {
            System.out.println("The array is sorted.");
        } else {
            System.out.println("The array is not sorted.");
        }
    }
}
