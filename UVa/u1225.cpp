#include<iostream>

using namespace std ;

int main() 
{
	int t ;
	cin >> t ;
	while(t--)
	{
		int n; 
		cin >> n; 
		int digit[] = {0,0,0,0,0,0,0,0,0,0} ;
		for(int i=1 ; i<=n ;i++)
		{
			int temp = i ;
			while(temp!=0)
			{
				digit[temp%10]++ ;
				temp/=10 ;
			}
		}
		cout << digit[0] ;
		for(int i=1 ; i<10 ; i++)
		{
			cout <<" "<< digit[i];
		}
		cout << endl ;
	}
	return 0 ;
}
