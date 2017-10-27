// Help Lost Robot!

#include<bits/stdc++.h>

using namespace std;

int main()
{
	int tc;
	cin>>tc;
	int x1, x2, y1, y2;
	string ans;
	while(tc--)
	{
		cin>>x1>>y1>>x2>>y2;
		//right - left
		if(y1==y2)
		{
			if(x1<x2) ans = "right";
			else if(x2<x1) ans = "left";
			else ans = "sad";
		}
		//up - down
		else if(x1==x2)
		{
			if(y1<y2) ans = "up";
			else if(y2<y1) ans = "down";
			else ans = "sad";
		}
		else
		{
			ans = "sad";
		}
		cout<<ans<<endl;
	}
	return 0;
}
