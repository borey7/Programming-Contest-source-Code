#include<iostream>

using namespace std;

int main()
{
	//freopen("input/u11764.txt","r",stdin);
	//freopen("input/u11764output.txt","w",stdout);
	int T;
	cin>>T;
	for(int t=1;t<=T;t++)
	{
		int min=0,max=0;
		int N;
		cin>>N;
		int n;
		cin>>n;
		int pren = n;
		N--;
		while(N--)
		{
			cin>>n;
			if(pren<n) max++;
			if(pren>n) min++;
			pren = n;
		}
		cout<<"Case "<<t<<": "<<max<<" "<<min<<endl;
	}
	return 0;
}
