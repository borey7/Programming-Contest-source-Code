//10370 - Above Average

#include<iostream>

using namespace std;

int main()
{
	//freopen("input/10370.in","r",stdin);
	//freopen("input/10370_output.in","w",stdout);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int grade[n] = {0};
		int sum = 0;
		for(int i=0;i<n;i++)
		{
			cin>>grade[i];
			sum += grade[i];
		}
		double avg = (double)sum/n;
		int count = 0;
		for(int i=0;i<n;i++)
		{
			if(grade[i] > avg) count++;
		}
		printf("%.3f\%\n",count*100.0/n);
	}
	return 0;
}
