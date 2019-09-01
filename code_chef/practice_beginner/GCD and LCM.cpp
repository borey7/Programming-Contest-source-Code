//GCD and LCM

not accepted

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
	cin>>tc;
	int a, b;
	int gcm;
	int lcm;
	while(tc--)
	{
		cin>>a>>b;
		gcm = GCM(a,b);
		lcm = a*b/gcm;
		printf("%d %d\n", gcm, lcm);
	}
	return 0 ;
}
