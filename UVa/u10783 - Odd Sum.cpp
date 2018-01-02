#include<iostream>

using namespace std;

int main()
{
	int c;
	cin>>c;
	for(int _c=1;_c<=c;_c++)
	{
		int a,b;
		cin>>a>>b;
		int sum = 0;
		for(int i=a;i<=b;i++)
			if(i%2!=0)
				sum += i;
		cout<<"Case "<<_c<<": "<<sum<<endl;			
	}
	return 0;
}
