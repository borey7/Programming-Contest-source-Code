import java.util.*;
import java.math.*;

class u10523_Very_Easy
{
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        while(input.hasNext())
        {
            BigInteger sum = new BigInteger("0");            
            int N = input.nextInt();
            int A = input.nextInt();            
            for(int i=1;i<=N;i++)
            {
                BigInteger powA = new BigInteger(Integer.toString(A)); 
                powA = powA.pow(i);
                powA = powA.multiply(BigInteger.valueOf(i));
                sum = sum.add(powA);
            }
            System.out.println(sum.toString());
        }
    }   
}