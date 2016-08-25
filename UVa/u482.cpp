#include<iostream>
#include<vector>

using namespace std;
int main()
{			
	int i=0;
	int c;
	cin>>c;
	for(int j=0;j<c;j++)
	{	
		//if there is no this condition the response is PE
		if(j!=0)
		{
			cout<<endl;
		}
		//idx		
		int _idx;
		vector<int>idx;	
		do
		{		
			cin>>_idx;							
			idx.push_back(_idx);		
		}while(cin.get()!='\n');							
		//value
		string val[idx.size()];
		string _val;
		for(i=0;i<idx.size();i++)
		{
			cin>>_val;
			val[idx[i]-1] = _val;
		}		
		//result
		for(i=0;i<idx.size();i++)
			cout<<val[i]<<endl;			
	}
	return 0;
}
