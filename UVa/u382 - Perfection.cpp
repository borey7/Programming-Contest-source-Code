#include<iostream>

using namespace std;

int checkPerfection(int n)
{	
	int sum = 0;
	for(int i=1;i<=n/2;i++)
	{
		if(n%i==0)
			sum = sum+i;
	}
	return sum;
}

int main()
{
	bool firstinput=true;
	int n, check_n;
	cin>>n;
	while(n!=0)
	{
		if(firstinput)cout<<"PERFECTION OUTPUT"<<endl;		
		printf("%5d",n);
		check_n = checkPerfection(n);
		if(check_n<n)
			cout<<"  DEFICIENT"<<endl;
		else if(check_n>n)
			cout<<"  ABUNDANT"<<endl;
		else
			cout<<"  PERFECT"<<endl; 				
		firstinput = false;
		cin>>n;
	}
	cout<<"END OF OUTPUT"<<endl;
	return 0;
}
