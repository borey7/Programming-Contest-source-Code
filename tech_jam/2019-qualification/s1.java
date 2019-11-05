// you can also use imports, for example:
import java.util.*;
import java.util.Arrays;
import java.lang.String;
// you can write to stdout for debugging purposes, e.g.
// System.out.println("this is a debug message");

class s1 {

    public static void main(String []args){
        System.out.println(solution("dddd"));
     }

    public static boolean isFind(String one,String temp){
        for(int i=0;i<temp.length();i++){
            if(one.equals(temp.substring(i,i+1))){
                return true;
            }
        
        }
        return false;
    }
    
    public static int solution(String S) {
        // write your code in Java SE 8
        try{
        String temp="";
        int re=1;
        for (int i=0;i<S.length();i++)
        {
            String curr_char = S.substring(i,i+1);
            
            if( isFind(curr_char, temp) ) {
                re++;
                temp=curr_char; // for get add when it is find
            }
            else
            { 
                temp = temp + curr_char;
            }
        }
        return re;
        }
        catch(Exception ex){
            return 0;
        }
        
    }
}
