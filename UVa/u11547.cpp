//11547

#include<iostream>

using namespace std;

int main()
{
	//freopen("input/11547.in","r",stdin);
	//freopen("input/11547[output].in","w",stdout);
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		n *= 567;
		n /= 9;
		n += 7492;
		n *= 235;
		n /= 47;
		n -= 498;		
		//..
		n = n%100;
		n = n/10;
		cout<<(n<0?-n:n)<<endl;
	}
	return 0;
}
