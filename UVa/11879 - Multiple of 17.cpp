//11879 - Multiple of 17

#include<iostream>

using namespace std ;

int modDigitLeft( string num );

int main()
{
	freopen("input/11879.in","r",stdin);
	string n = "1" ;
	while( 1 )
	{
		cin >> n ;
		if(n=="0")break ;
		cout << (modDigitLeft(n)==0) << endl ;

	}
	return 0 ;
}

int modDigitLeft( string num )
{
	int len = num.size();
	//cout<<"--len = "<<len<<endl;
	
	if(len<=2) 
	{					
		int n = num[0] - 48;
		if(len == 2) n = n*10 + num[1] - 48;
		//cout<<"2 first digits : "<<n<<endl;
		return n%17 ;
	}	
	
	int lastDigit = num[len-1] - 48 ;	
	//cout<<"1 last digit : "<<lastDigit<<endl;
	return ( ( modDigitLeft(num.substr(0, len-1)) * 10)%17 + lastDigit%17 ) %17 ;	
}
