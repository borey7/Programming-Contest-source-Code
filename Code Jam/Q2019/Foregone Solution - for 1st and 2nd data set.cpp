#include <iostream>
#include <math.h>
#include <string.h>

using namespace std;

int getDigit(int n) {
	
	int d = 0;
	
	for (int i=1; i<=100; ++i) {		
		if (pow(10.0, i-1) <= n && n < pow(10.0, i)) {
			d = i;
			break;
		}
	}
	
	return d;
}

void getOnePair(int n) {
	
	int a = 0, b = 0, temp;
	int d = getDigit(n);
	
	for (int i=0; i<d; ++i) {
		
		temp = n % 10;
		
		a = a + (temp == 4 ? 3 : temp) * (int(pow(10.0, i)));
		b = b + (temp == 4 ? 1 : 0) * (int(pow(10.0, i)));
		
		n = n / 10;
	}
	cout << a << " " << b << endl;
}

int main() {
	
	int t, n;
		
	cin >> t;	
	for(int i=1; i<=t; ++i) {		
		
		cin >> n;
		cout << "Case #" << i << ": ";
		getOnePair(n);		
	}
	
	return 0;
}
