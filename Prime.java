
public class Prime{

    public static void main(String[] args){

        Long initial = System.currentTimeMillis();

        int numPrimes = 0;
        for(int i = 2; i < 250001; i++){

            numPrimes += isPrime(i);
        }
    System.out.println(numPrimes);
    System.out.println(System.currentTimeMillis() - initial + "-ms");
    }
    private static int isPrime(int n){

        for(int i = 2; i < (int)(n/2)+1; i++){
            if(n % i == 0){return 0;}
            return 1;
        }
    }
}