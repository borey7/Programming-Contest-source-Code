#include <iostream>

#define blong unsigned long long

using namespace std;

blong reverse(blong n) {
	
	blong r = 0;
	
	while(n > 0) {
		r = (r * 10) + (n % 10);	
		n = n / 10;
	}
	
	return r;
}

bool isNotPalindrome(blong n) {
	
	return (n != reverse(n));
}

int main() {
	int t;	
	int round;
	blong sum;
	blong n;
	blong r;
	
	cin >> t;
	
	while(t--) {
		round = 0;
		sum = 0;
		n = 0;
		r = 0;
		
		cin >> n;		
		
		do {
			r = reverse(n);
			sum = n + r;
			round++;		
			n = sum;
		}while(isNotPalindrome(sum));
		
		cout << round << " " << n << endl;
	}
	
	return 0;
}
