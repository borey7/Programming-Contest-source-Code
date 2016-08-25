#include<iostream>

using namespace std;

int BigMod(int b, int p, int m)
{
	if(p==0)
		return 1;
	else if(p%2==0)
	{
		int tem = BigMod(b,p/2,m)%m;
		return ((tem*tem)%m);
	}
	else
		return (((b%m)*(BigMod(b,p-1,m)))%m);
}

int main()
{
	int b,p,m;
	while(scanf("%d %d %d",&b,&p,&m)==3)
	{
		cout<<BigMod(b,p,m)<<endl;
	}
	return 0;
}
