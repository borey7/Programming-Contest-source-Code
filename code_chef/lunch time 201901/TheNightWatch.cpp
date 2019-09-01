/*
str.length()
char to int

*/

#include<bits/stdc++.h>

using namespace std;

#define _do(init, n) for(int i=init; i<n; i++)

int max(int n, string s) {
	int m = 0;
	bool flags[n];
	
	_do(0, n) { flags[i] = !(bool)(s[i] - '0'); }
	_do(0, n) {
		if (flags[i]) {	
			if (i == 0) { //no left
				if (n==1 || flags[i+1]) {
					m++;
					flags[i] = 0;
				}
			}		
			else if (i == n-1) { //no right
				if (flags[i-1]) {
					m++;
					flags[i] = 0;
				}
			}
			else if (flags[i-1] && flags[i+1]) 
			{
				m++;
				flags[i] = 0;				
			}				
		}					
	}
	return m;
}

int main() {
	int t,
		n;	
	string s;
	
	cin >> t;
	_do(0, t) {
		cin >> n
			>> s;
		cout << max(n, s)
			<< endl;
	}
	
	return 0;
}
