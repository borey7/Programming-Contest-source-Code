#include<iostream>

using namespace std;

//find all posible number (01234 to 98765)
int list_num[30248];

bool diff_digit(int n)
{
	int digit[10] ={0,0,0,0,0,0,0,0,0,0};	
	digit[n%10]++;	
	digit[(n/10)%10]++;	
	digit[(n/100)%10]++;	
	digit[(n/1000)%10]++;	
	digit[n/10000]++;		
	return (digit[n%10]==digit[(n/10)%10] &&
			digit[(n/10)%10]==digit[(n/100)%10] &&
			digit[(n/100)%10]==digit[(n/1000)%10] &&
			digit[(n/1000)%10]==digit[n/10000]);
}

void find_diff_digit_num()
{
	int idx = 0;		
	for(int i=1234 ; i<=98765 ; i++)
	{
		if(diff_digit(i))
		{	
			list_num[idx]=i;			
			idx++;
		}		
							
	}	
}
bool notSameDigit(int a, int b)
{
	int d[10] ={0,0,0,0,0,0,0,0,0,0};
		
	d[a%10]++;d[b%10]++;
	d[a/10%10]++;d[b/10%10]++;
	d[a/100%10]++;d[b/100%10]++;
	d[a/1000%10]++;d[b/1000%10]++;
	d[a/10000]++;d[b/10000]++;
	
	return (d[0]==1 && d[1]==1 && d[2]==1 && d[3]==1 && d[4]==1 &&
			d[5]==1 && d[6]==1 && d[7]==1 && d[8]==1 && d[9]==1);
}

int main()
{	
	//find and keep all 5 differnent digit between 01234 to 98765		
	find_diff_digit_num();
		
	int a,b,N;
	cin>>N;
	bool firstInput = true;
	while(N!=0)
	{	
		if(!firstInput)
			cout<<endl;
		//each case 
		bool noSolution = true;
		int b_max=98765/N;
		for(int idx=0; idx<30248; idx++)
		{
			if(list_num[idx]<=b_max)
			{
				b=list_num[idx];
				a=b*N;
				
				if(notSameDigit(a,b))
				{						
					if(a<10000) cout<<0<<a;
					else cout<<a;
					cout<<" / ";					
					if(b<10000) cout<<0<<b;
					else cout<<b;
					cout<<" = "<<N<<endl;											
					noSolution = false;
				}
			}			
		}
		if(noSolution)
			cout<<"There are no solutions for "<<N<<"."<<endl;
		//new case 
		cin>>N;
		firstInput = false;
	}	

	return 0;
}

