//10812

#include<iostream>

using namespace std;

int main()
{
	//freopen("input/u10812.in","r",stdin);
	//freopen("input/u10812[output].in","w",stdout);
	int t;
	cin>>t;
	while(t--)
	{
		long long s,d;
		cin>>s>>d;
		long long a = (s+d)/2;
		long long b = s-a;
		if (s<0 || d<0 || s<d || a<0 || b<0 || (s+d)%2==1) printf("impossible\n");
		else cout<<a<<" "<<b<<endl;
	}
	return 0;
}
