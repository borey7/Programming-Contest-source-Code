#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int n;
	cin>>n;
	string country[n];
	
	// input
	int i=0;
	while(i<n)
	{
		cin>>country[i];
		string name;
		getline(cin, name);				
		i++;
	}
	
	// sort;	
	sort(country, country+n);
	
	// count;
	string c = country[0];
	int num_country=1;
	for(i=1;i<n;i++)
	{		
		if(c==country[i])
		{
			num_country++;
		}
		else
		{
			cout<<c<<" "<<num_country<<endl;
			num_country=1;			
			c = country[i];
		}		
		if(i==n-1)
		{
			cout<<c<<" "<<num_country<<endl;			
		}
	}
	
	return 0;
}
