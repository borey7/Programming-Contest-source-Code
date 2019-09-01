//Total Expenses

#include<bits/stdc++.h>

using namespace std;

int main()
{
	int tc;
	cin>>tc;
	int q;
	int p;
	while(tc--)
	{
		cin>>q>>p;
		printf("%.6f\n", (q>1000?(q*p - q*p*0.1):((double)q*p)));		
	}
	return 0;
}
