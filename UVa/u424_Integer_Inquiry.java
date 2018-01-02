import java.util.*;
import java.math.*;

class u424_Integer_Inquiry
{
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        BigInteger sum = new BigInteger("0");
        String num = input.nextLine();
        while(!num.equals("0"))
        {
            sum = sum.add(new BigInteger(num));
            num = input.nextLine();
            if(num.equals("0"))
                System.out.println(sum.toString());
        }        
    }
}