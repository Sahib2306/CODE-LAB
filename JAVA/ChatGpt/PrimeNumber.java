package ChatGpt;

public class PrimeNumber {
    public static void main(String[] args) {
        for(int i = 2; i <= 100; i++) {   // start from 2
            boolean isPrime = true;
            for(int j = 2; j <= i/2; j++) {   // check up to i/2
                if(i % j == 0){
                    isPrime = false;    // found a divisor
                    break;
                }
            }
            if(isPrime){
                System.out.println(i);
            }
        }
    }
}
