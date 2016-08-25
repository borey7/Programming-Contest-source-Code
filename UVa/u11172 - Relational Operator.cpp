#include<iostream>

using namespace std;

main(){
	int t;
	int a,b;
	cin>>t;
	while(t--){
		cin>>a>>b;
		if(a>b)cout<<">"<<endl;
		else if(a<b)cout<<"<"<<endl;
		else cout<<"="<<endl;
	}
}
