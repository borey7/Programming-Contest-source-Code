#include<iostream>

using namespace std;

int count_operation(int size)
{
	int num[size];
	for(int i=0;i<size;i++)
		cin>>num[i];
	int count = 0;	
	int temp = 0;
	for(int i=size-1;i>=1;i--)
	{
		for(int j=0;j<i;j++)
		{			
			if(num[j]>num[j+1])
			{
				temp = num[j];
				num[j] = num[j+1];
				num[j+1]=temp;
				count++;
			}
		}
	}
	
	return count;
}

int main()
{
	freopen("input/u10327.txt","r",stdin);
	int n;
	while(cin>>n)
	{
		cout<<"Minimum exchange operations : "<<count_operation(n)<<endl;
	}
	return 0;
}
