/**
	uva 458 - The Decoder
	rank 28300 28
**/

#include<iostream>
#include<string>

using namespace std;

int main()
{
	//freopen("input/458.in","r",stdin);
	string code;
	while(getline(cin,code))
	{
		int size = code.length();		
		for(int i=0;i<size;i++)
		{
			cout<<(char)(code[i]-7);
		}			
		cout<<endl;
	}
	return 0;
}
