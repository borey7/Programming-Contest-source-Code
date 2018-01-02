#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int n;
	int c = 1;	
	while(1)
	{
		cin>>n;
		if(n==0) break;
		vector<int>h;
		int _h,sum = 0;
		
		for(int i=0;i<n;i++)
		{
			cin>>_h;
			h.push_back(_h);
			sum += _h;
		}
		int avg = sum/n;
		int count = 0;
		for(int i=0;i<h.size();i++)
		{
			if(avg<h[i])
				count += h[i]-avg;
		}		
		cout<<"Set #"<<c<<endl;
		cout<<"The minimum number of moves is "<<count<<"."<<endl;
		h.erase(h.begin()+h.size()-1);
		cout<<endl;
		c++;
	}
	return 0;
}
