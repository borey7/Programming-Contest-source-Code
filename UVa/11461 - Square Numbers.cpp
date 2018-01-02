//11461 - Square Numbers

#include<iostream>
#include<cmath>

#define ZERO (1e-10) 
#define EQ(A,B) (A+ZERO>B&&A-ZERO<B) 

using namespace std;

int main()
{
	freopen("input/11461.in","r",stdin);
	//freopen("input/11461_output.in","w",stdout);
	int a,b;
	while(1)
	{
		scanf("%d %d",&a,&b);
		if(a==0 && b==0) break;
		int count = 0;
		double p ;
		for(int i=a; i<=b;i++)
		{
			p = pow(i, 1.0/2);
			//if( EQ(p ,(int)p ) ) count++;
			
		}
		printf("%d\n",count);
	}
	return 0 ;
}
