#include<iostream>

using namespace std;

bool isFloat(double n) {
	return (n - (int)n > 0);
}

int getMinSonarBeam(int n, int m) {
	
	double r = (n - 2) / 3.0;
	int row = (int)(isFloat(r) ? r + 1 : r);
	
	double c = (m - 2) / 3.0;
	int col = (int)(isFloat(c) ? c + 1 : c);
	
	return (row * col);
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
