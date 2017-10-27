//Chef and Remissness
#include<bits/stdc++.h>

#define MAX(a,b) ((a>b)?(a):(b))

using namespace std;

int main()
{
	int tc;
	int n, m;	
	cin>>tc;
	while(tc--)
	{
		cin>>m>>n;		
		cout<<MAX(m, n)<<" "<<(m+n)<<endl;
	}
	return 0;
}
