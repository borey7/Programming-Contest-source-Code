//10035 - Primary Arithmetic

#include<iostream>

#define Max(a,b) (a>b?a:b)
using namespace std;

int main()
{	
	//freopen("input/10035.in","r",stdin);
	//freopen("input/10035_output.in","w",stdout);
	while(1)
	{
		int a,b;
		cin>>a>>b;		
		if(a==0 && b==0) break;
				
		int remain = 0;
		int carry = 0;
		
		int max = Max(a,b);
		
		while(max>0)		
		{			
			if(a%10+b%10+remain>9) { carry++; remain=1; }
			else remain = 0;			
			a /= 10;
			b /= 10;
			max /= 10;
		}
		switch(carry)
		{
			case 0:cout<<"No carry operation."<<endl;break;
			case 1:cout<<"1 carry operation."<<endl;break;
			default : cout<<carry<< " carry operations."<<endl;
		}		
	}
	return 0;
}
