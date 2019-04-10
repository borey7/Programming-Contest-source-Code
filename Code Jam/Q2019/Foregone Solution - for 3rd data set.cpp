/*
	used:
		-	get input as string: getline (use getchar() to prevent previous char)
		-	string empty check
		-	concate char to the end of string 	
*/


#include <iostream>
#include <string>

using namespace std;

void getOnePair(string n) {
	
	string ans = "", a = "", b = "";
	int l = n.size();
	
	for (int i=0; i<l; ++i) {
		if (n[i] == '4') {
			a.push_back('3');
			b.push_back('1');
		} else {
			a.push_back(n[i]);
			if (!b.empty()) {
				b.push_back('0');	
			}
		}
	}

	cout << a << " " << (b.empty() ? "0" : b) << endl;
}

int main() {
	
	int t;
	string n;
	
	cin >> t;
	getchar();
	
	for (int i=1; i<=t; ++i) {
		
		getline(cin, n);
		
		cout << "Case #" << i << ": ";
		getOnePair(n);
	}
	
	return 0;
}
