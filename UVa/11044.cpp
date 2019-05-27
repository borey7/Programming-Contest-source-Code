#include<iostream>

using namespace std;

bool isFloat(double n) {
	return (n - (int)n > 0);
}

int getMinOnLine(int l) {	

	double num = (l - 2) / 3.0;
	
	return (int)(isFloat(num) ? num + 1 : num);
}

int getMinSonarBeam(int n, int m) {
	
	return (getMinOnLine(n) * getMinOnLine(m));
}

int main() {
	
	int t; 
	int n, m;
	
	cin >> t;
	
	while(t--) {
		cin >> n >> m;
		cout << getMinSonarBeam(n, m) << endl;
	}
	
	return 0;
}
