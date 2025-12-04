public class VariableArguments {
    static int sum(int... arr) {

        int result = 0;
        for (int i : arr) {
            result += i;
        }
        return result;

    }

    public static void main(String[] args) {
        /*
         * if we donot want to pass many args in the method than we can use varargs
         * syntax:
         * static int sum(int ...arr){
         * "these 3 dots become an array   int [] arr;"
         * 
         * int result=0;
         * we have to use foreach loop to perform actions
         * for(int a : arr){
         * result+=a;
         * }
         * return result
         * }
         */
        System.out.println(sum(1, 2, 3, 4, 5));
        /*if we want a permanent variable to enter then put a arg in method */
        System.out.println(sum());

    }
}
