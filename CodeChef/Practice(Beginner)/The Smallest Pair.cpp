//The Smallest Pair

#include<bits/stdc++.h>

using namespace std;

int main()
{
	int tc;
	cin>>tc;
	int n;
	int a;
	int temp;
	int ans;
	while(tc--)
	{
		cin>>n;		
		cin>>a;
		temp = a;						
		cin>>a;
		ans = a + temp;
		temp = a;
		for(int i=2;i<n;++i)
		{
			cin>>a;			
			if(ans > temp + a) ans = temp + a;
			temp = a;
		}
		cout<<ans<<endl;
	}
	return 0;
}
