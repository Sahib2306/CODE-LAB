public class JavaMethods {
    // method which can be used without creating an object
    static int sum(int x,int y){
        int z = x+y;
        return z;
    }
    // method which can be called only if an object is created 
    void multiply(int a ,int b){
        int c= a*b;
        System.out.println(c);
    }

    public static void main(String[] args) {
        int a = 60;
        int b=9;
        int c = sum(a,b); // calling method without object
        System.out.println(c);
        // calling method with object creation
        JavaMethods obj = new JavaMethods();
        obj.multiply(5,5);
        
    }
}
