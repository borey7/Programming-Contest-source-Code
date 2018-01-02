//10591 - Happy Number

#include<iostream>

using namespace std;

bool isHappyNum(int num)
{
	bool notFound = true;	
	//loop until sum < 10
	int n=num;	
	int s, digit;
	while(notFound)
	{			
		//each digit
		s=0;		
		digit=0;
		while(n>0)
		{
			digit = n%10;
			s = s + digit*digit;		
			n = n/10;
		}
		n = s;
		if(n<10) notFound = false;
	}
	return n == 1 ? true: false;	
}

int main()
{
	//freopen("input/u10591.in","r",stdin);
	//freopen("input/u10591[output].in","w",stdout);
	int t=0;
	cin>> t;
	int cas=1;
	while(cas<=t)
	{
		int n;
		cin>>n;
		
		cout<<"Case #"<<cas<<": "<<n<<" is "<<(isHappyNum(n)?"a Happy" : "an Unhappy")<<" number."<<endl;		
		
		cas++;
	}
	return 0;
}
