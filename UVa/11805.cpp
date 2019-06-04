#include<iostream>

using namespace std;

int main() {
	
	int t;
	int n, k, p;
	int step;
	
	cin >> t;
	
	for(int c=1; c<=t; ++c) {
		
		cin >> n >> k >> p;
		
		step = p%n;
		
		int final = k;
		
		for(int i=0; i<step; ++i) {
			final = ++k % n;
		}
		
		cout << "Case " << c << ": " << (final==0? n: final)<< endl;
	}
	
	return 0;
}
