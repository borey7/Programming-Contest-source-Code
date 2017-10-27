//Cutting Recipes
#include<bits/stdc++.h>

using namespace std;

int GCM(int a, int b)
{
	while(b>0)
	{
		a = a%b;
		a ^= b;
		b ^= a;
		a ^= b;
	}
	return a;
}

int main()
{
	int tc;
	int n;
	cin>>tc;
	while(tc--)
	{
		cin>>n;
		int recip[n];
		for(int i=0;i<n;++i)
		{
			cin>>recip[i];
		}		
		//find lcm
		int gcm = recip[0];
		for(int i=1;i<n;++i)
		{
			gcm = GCM(gcm, recip[i]);
		}
		//
		for(int i=0;i<n;++i)
		{
			cout<<recip[i]/gcm<<" ";
		}
		cout<<endl;
	}
	return 0;
}
