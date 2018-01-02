#include<iostream>
#include<cmath>
#include<algorithm>

using namespace std;

int main()
{
	int n;
	while(cin>>n)
	{
		int num;
		cin>>num;
		if(n==1)
		{		
			cout<<"Jolly"<<endl;		
		}
		else
		{			
			int size = n-1;
			int space[size];
			int prev;			
			prev = num;		
			for(int i=0;i<size;i++)
			{
				cin>>num;
				space[i]=abs(num-prev);
				prev = num;
			}				
			sort(space,space+n-1);
			if(space[size-1]!=size)
				cout<<"Not jolly"<<endl;
			else
			{
				int i=0;
				for(i=0;i<size;i++)
					if(space[i]!=i+1) break;
				cout<<(i==size?"Jolly":"Not jolly")<<endl;
			}
		}
	}
	return 0;
}
