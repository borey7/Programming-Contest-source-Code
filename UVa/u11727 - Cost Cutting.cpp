#include<iostream>

using namespace std;

main(){
	int t;
	int salary[3];
	int result;
	cin>>t;
	for(int i=1;i<=t;i++){
		cin>>salary[0];
		cin>>salary[1];
		if(salary[0]>salary[1]){
			salary[2]=salary[1];
			salary[1]=salary[0];
			salary[0]=salary[2];
		}
		cin>>salary[2];
		if(salary[2]<salary[1])
			if(salary[2]<salary[0])
				result=salary[0];
			else
				result=salary[2];
		else
			result=salary[1];
		cout<<"Case "<<i<<": "<<result<<endl;
	}	
}
