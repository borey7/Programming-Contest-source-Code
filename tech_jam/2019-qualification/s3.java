import java.util.*;
import java.util.Arrays;
import java.util.List;

public class s3 {

     public static void main(String []args){
         
        int input[] = {4, 4};
        
        int ans = solution(input);
        System.out.println( ans );
     }

     public static int solution(int[] A) {
        // write your code in Java SE 8
        int longest = 0;
        int len = A.length;
        for( int i=0; i<A.length-1 ; ++i ) {
            for (int j=i+2; j<=len; j++ ) {
                int slice[] = Arrays.copyOfRange(A, i, j);
                // System.out.print("--curr len:"+ longest +" >>>" + Arrays.toString(slice));
                longest = Math.max( longest,  get_bi_len( slice ));
                // System.out.println(" >>> " + longest);
            }
        }
         
        return longest;
        
    }
     public static int get_bi_len(int []arr) {
        Arrays.sort(arr);
        int []sorted_arr = arr;
        int min = sorted_arr[0];
        int max = sorted_arr[sorted_arr.length - 1];

        // System.out.print("     > max "+max + " > min " + min + " : " + Arrays.toString(sorted_arr));
        int i=0;
        // long ans = 0;
        for (i=0; i<sorted_arr.length ;i++) {
            if ((sorted_arr[i] != max) && (sorted_arr[i] != min)) return 0;
        }
        // if (i==sorted_arr.length) ans = arr.length;
        //System.out.println(" === "+ans);
        return sorted_arr.length;
    }
     
}