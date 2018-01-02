//11428 - Cubes

#include<iostream>
#include<cmath>


#define ZERO (1e-10) 
#define EQ(A,B) (A+ZERO>B&&A-ZERO<B) 
using namespace std;

int main()
{
	//freopen("input/u11428.in","r",stdin);
	//freopen("input/u11428[output].in","w",stdout);
	int n;

	while(1)
	{
		cin>>n;
		if(n==0)break;
		double y;		
		double x;		
		bool notFound = true;
		for(y=1;y<=n && notFound;y++)
		{
			x = pow(n+y*y*y, 1.0/3);
			if(EQ(x,(int)(x+1e-9)))
			{	
				if(x>y)	cout<<x<<" "<<y<<endl;
				else cout<<y<<" "<<x<<endl;
				notFound = false;
				break;				
			}
		}
		if(notFound) cout<<"No solution\n" ;
	}

	return 0;
}
