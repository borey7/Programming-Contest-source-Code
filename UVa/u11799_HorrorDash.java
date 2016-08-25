import java.util.Scanner ;

class u11799_HorrorDash {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in) ;
        
        int t = input.nextInt() ;
        int student ;                
        
        for(int i=1 ; i<=t ;i++){            
            int max = 0 ;
            student = input.nextInt() ;            
            int j = student ;
            while(j-- > 0){
                student = input.nextInt() ;
                if(max < student)
                    max = student ;
            }               
            System.out.println("Case "+i+": "+max );
        }        
    }
}
