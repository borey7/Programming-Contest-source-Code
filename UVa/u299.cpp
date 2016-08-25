//0<=l<=50
#include<iostream>

using namespace std;

int count(int data[] , int l){
	int count = 0;
	int temp;	
	for(int i=l-1;i>=1;i--){			
		for(int j=0;j<=i-1;j++){
			if(data[j]>data[j+1]){
				temp = data[j];
				data[j] = data[j+1];
				data[j+1] = temp;
				count++;
			}
		}
	}
	return count;
}

main(){
	
	int n;
	cin >> n;
	while(n--){
		int l;		
		cin >> l;
		int data[l];
		for(int i=0 ; i<l ; i++){
			cin >> data[i];			
		}
		cout << "Optimal train swapping takes "<<count(data , l)<<" swaps."<<endl;
	}
}
