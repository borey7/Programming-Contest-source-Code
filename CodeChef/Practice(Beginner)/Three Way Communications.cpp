//Three Way Communications

#include<bits/stdc++.h>

using namespace std;

int main()
{
	int tc;
	cin>>tc;
	while(tc--)
	{		
		int R;
		cin>>R;
		int x[3], y[3];		
		for(int i=0;i<3;++i)
		{					
			cin>>x[i]>>y[i];
		}
		double dis = 0;
		int ans = 0;
		for(int i=0;i<3;++i)
		{
			int X = x[i] - x[(i+1)%3];
			int Y = y[i] - y[(i+1)%3];
			dis = sqrt(X*X + Y*Y);
			if(dis > R)
			{
				ans++;
			}
		}
		cout<<(ans>=2?"no":"yes")<<endl;				
	}
	return 0;
}
