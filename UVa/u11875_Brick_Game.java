import java.util.* ;

class u11875_Brick_Game {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in) ;

		int t = input.nextInt() ;
		for(int i=1 ;i<=t ;i++) {
			int n = input.nextInt() ;

			int age[] = new int[n] ;
			for(int j=0 ; j<n ;j++) {

				age[j] = input.nextInt() ;
			}

			Arrays.sort (age) ;

			System.out.println("Case "+i+": "+age[n/2]) ;
		}
	}
}