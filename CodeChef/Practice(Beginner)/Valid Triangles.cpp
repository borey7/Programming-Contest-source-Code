//Valid Triangles

#include<bits/stdc++.h>

using namespace std;

bool validTriangle(int a, int b, int c)
{	
	return (a+b+c==180)&&(a>0)&&(b>0)&&(c>0);
}

int main()
{
	int tc;
	cin>>tc;
	while(tc--)
	{
		int a, b, c;
		cin>>a>>b>>c;
		cout<<(validTriangle(a,b,c)?"YES":"NO")<<endl;
	}
	return 0;
}
