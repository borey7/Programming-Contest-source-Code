#include<iostream>
#include<string.h>

using namespace std;

int main()
{	
	string n;
	cin>>n;
	while(n.compare("0")!=0)
	{
		int odd=0, even=0;
		
		for(int i=0;i<n.size();i++)
		{
			if(i%2==0)
				even = even + n[i]-48;
			else
				odd = odd + n[i]-48;						
		}
		if((even-odd)%11==0)
			cout<<n<<" is a multiple of 11."<<endl;
		else
			cout<<n<<" is not a multiple of 11."<<endl;
		cin>>n;
	}
	return 0;
}
