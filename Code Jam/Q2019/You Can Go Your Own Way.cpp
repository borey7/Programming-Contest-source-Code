#include <iostream>
#include <string>

std::string getPath(std::string fp, int n) {
	
	std::string path = "";
	
	for(int i=0; i<2*n - 2; ++i) {
		path.push_back(fp[i] == 'E' ? 'S' : 'E');
	}

	return path;
}

int main() {
	
	int t, n;
	std::string fp;
	
	std::cin >> t;
	
	for (int i=1; i<=t; ++i) {
		
		std::cin >> n;
		getchar();
		getline(std::cin, fp);
		
		std::cout << "Case #" << i << ": " << getPath(fp, n) << std::endl;
	}
	
	return 0;
}
