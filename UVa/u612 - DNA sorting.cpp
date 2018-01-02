/**
	UVa 612 - DNA sorting
*/

#include<iostream>
#include<string>

using namespace std;

int inversionof(string DNA)
{
	int count= 0 ;
	int len = DNA.length();
	string temp;
	for(int i=len-1;i>=1;i--)
	{
		for(int j=0;j<=i-1;j++)
		{
			if(DNA[j]>DNA[j+1])
			{				
				temp = DNA.substr(j,1);
				DNA.replace(j,1,DNA.substr(j+1,1));
				DNA.replace(j+1,1,temp);
				count++;
			}
		}
	}
	return count;
}

int main()
{
	//freopen("input/612.txt","r",stdin);
	//freopen("input/612_output.txt","w",stdout);
	int M;
	cin>>M;
	for(int t=1;t<=M;t++)
	{
		if(t!=1) cout<<endl;
		int n,m;
		cin>>n>>m;
		string DNA[m];
		int values[m] = {0};	
		for(int i=0;i<m;i++)
		{
			cin>>DNA[i];
			values[i] = inversionof(DNA[i]);
		}
		//buble sort. Sort DNA and values
		int temp1 = 0;
		string temp2;
		for(int i=m-1;i>=1;i--)
		{
			for(int j=0;j<=i-1;j++)
			{
				if(values[j]>values[j+1])
				{
					temp1 = values[j];
					values[j] = values[j+1];
					values[j+1] = temp1;
					
					temp2 = DNA[j];
					DNA[j] = DNA[j+1];
					DNA[j+1] = temp2;
				}
			}
		}
		
		for(int i=0;i<m;i++)
			cout<<DNA[i]<<endl;
	
	}
	return 0 ;
}
