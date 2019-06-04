#include<iostream>

using namespace std;

int main() {
	int t = 1; 
	int n, r;
	int rest; 
	int result = 0;
	
	cin >> r >> n;
	while(r != 0 && n != 0) {
	
		rest = r - n;
		
		if(rest > 0) {
			
			int i = 0;
			
			for(i=1; i<=26; ++i) {
				rest -= n;
				if (rest <= 0) {
					cout << "Case " << t << ": " << i << endl;		
					break;
				}
			}	
			
			if (i==27) cout << "Case " << t << ": impossible" << endl;	
		}
		else {
			cout << "Case " << t << ": 0" << endl;
		}
		
		t++;
		
		cin >> r >> n;
	}
	
	return 0;
}
