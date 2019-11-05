// you can also use imports, for example:
import java.util.*;
import java.util.Arrays;
import java.lang.String;
// you can write to stdout for debugging purposes, e.g.
// System.out.println("this is a debug message");

class s2 {

    public static void main(String []args){

        // solution({0, 9, 0, 2, 6, 8, 0, 8, 3, 0});
        
    }

    public static int solution(int[] T) {
        // write your code in Java SE 8
        int len = T.length;
        int[][] matrixs = new int[len][len];

        for (int r=0; r<len; r++) {
            for (int c=0; c<len; c++) {
                matrixs[r][c] = false;
            }
        }

        for (int i=0; i<len; i++) {
            matrixs[i][T[i]] = true;
        }
        

        for (int r=0; r<len; r++) {
            for (int c=0; c<len; c++) {
                System.out.print(" " + matrixs[r][c]);
            }
            System.out.println("");
        }

        return 0;
    }
}
