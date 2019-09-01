#include<iostream>

using namespace std;

int main()
{
	int T ;
	cin>>T;
	while(T--)
	{		
		string a;
		string num="";
		for(int i=0;i<5;i++)
		{cin>>a;num+=a;}
		cout<<(num=="12345" || num=="23456" ? "Y":"N")<<endl;
	}
	return 0;
}
