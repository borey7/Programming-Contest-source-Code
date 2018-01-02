//it use to compute the under or equal 1000! 

#include<iostream>

#define MAX 2569
using namespace std;

string nFac[1001] = {""};				

void factorial1000()
{
	int n = 1000;

	int digits[MAX]={0}; //digits [0][0][0]...[0]
	digits[0]=1;//[1][0][0]...[0]
	int remain=0;	
//	int newestIdx = 0;
	nFac[0] = "1";	
	for(int i=1;i<=n;i++ ) //1! - n!
	{
		int j=0;
		for(j = 0;j<MAX;j++)
		{
			remain=digits[j]*i+remain;//[1][0][0]...[0]
			digits[j]=remain%10;
			remain/=10;			
		}
		bool zeroPrefix = true;		
		for(int idx=MAX-1;idx>=0;idx--)		
		{
			if(digits[idx]!=0) 
			{
				//if(zeroPrefix) newestIdx = idx-1;
				zeroPrefix = false;				
			}
			if(!zeroPrefix)
			{
				nFac[i] += char(digits[idx]+48);
			}					
		}											
	}		
}

main(){
	//freopen("input/u623.in","r",stdin);
	//freopen("input/u623[output].in","w",stdout);
	
	factorial1000();
	int num;
	while(cin>>num)
	{		
		cout<<num<<"!\n"<<nFac[num]<<endl;
	}	
}
