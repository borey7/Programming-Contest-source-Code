#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

string reverse(string s) {
	
	string r = "";
	int len = s.size();
	
	for(int i=len - 1; i>=0; --i) {
		r.append(s.substr(i, 1));
	}
	
	return r;
}

bool isPolidrome(string s) {
	
	string r = reverse(s);
	
	return (s.compare(r) == 0);
}

bool isNotExist(string s, vector<string>ss) {
	
	vector<string>::iterator it = find(ss.begin(), ss.end(), s);
	
	return (it == ss.end());
}

int main() {
	
	string s;
	string temp;
	int len;
	int count;
	int p;
	
	while(cin >> s) {
		count = 0;
		len = s.length();
		vector<string> ss;
		
		for(int i=0; i<len; ++i) {
			for(int j=0; j<len-i; ++j) {
				temp = s.substr(j, i+1);
				if (isNotExist(temp, ss)) {
					ss.push_back(temp);
					count = count + (isPolidrome(temp) ? 1:0);
				}
			}
		}
		cout << "The string '" << s << "' contains " << count << " palindromes." << endl;
	}
	
	return 0;
}
