//Primality Test

#include<bits/stdc++.h>

using namespace std;

bool isPrime(int n)
{
	if(n==1) return false;
	if(n==2) return true;
	else
	{
		for(int i=2;i*i<=n;++i)
		{
			if(n%i==0) return false;
		}
	}
	return true;
}

int main()
{
	int tc;
	cin>>tc;
	int n;
	while(tc--)
	{
		scanf("%d", &n);
		cout<<(isPrime(n)?"yes":"no")<<endl;
	}
	return 0;
}
