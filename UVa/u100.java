import java.util.Scanner ;

class u100 {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in) ;
		while(input.hasNext()) {
			int i = input.nextInt() ;
			int j = input.nextInt() ;
			int max = 0 ;			
			for(int k=Math.min(i, j) ;k<=Math.max(i, j) ;k++) {
				int temp = process(k) ;
				if(max<temp) max = temp ;
			}
			System.out.println(i+" "+j+" "+max) ;
		}
	}	
	public static int process(int n) {
		int count = 1 ;
		if(n == 1) return count ;
		while(n!=1) {
			if(n%2 != 0) n = 3*n + 1 ;
			else n = n/2 ;
			count++ ;
		}
		
		return count ;
		
	}
}