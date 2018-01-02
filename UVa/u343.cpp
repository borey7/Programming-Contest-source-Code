/**
343 What Base Is This?
- the maximum char in string num is the minimum base it can be
- keep n1 base 10 in idx[2]-[36] that converted from base 2-36
- convert n2 to base 10 and for each convertion from base 2-36
compare it to the array n1
*/

#include<iostream>
#include<cmath>

using namespace std;

long long base10of(string num, long long base)
{
	long long result = 0;
	int len = num.size();
	int min_base = 1;
	
	for(int i=0;i<len;i++)
	{			
		if(min_base < num[i]-(num[i]<='9'?48:55)) min_base = num[i]-(num[i]<='9'?48:55);
		
		long long fac = (long long)pow(base + 0.0 , len-i-1.0);
		result += (num[i]-(num[i]<='9'?48:55)) * fac;
	}
	
	//if there is any char that bigger than base mean it cannot be in that base
 	if(base <= min_base) return 0;
	
	return result;
}

int main()
{
	//freopen("input/udebug343.txt","r",stdin);
	string n1,n2;
	while(cin>>n1>>n2)
	{
		long long n1_base_10[37];
		long long n2_base_10;
		
		//convert n1
		for(int base=2;base<37;base++)
		{
			n1_base_10[base] = base10of(n1,base);
		}
		//convert n2 and find
		bool found = false;
		int n1_found_in = 0,n2_found_in = 0;		
		for(int base=2;base<37 && !found;base++)
		{
			n2_base_10 = base10of(n2,base);
			//search this number in n1_base_10[]
			for(int i=2;i<37 && n2_base_10!=0 && !found; i++)
			{							
				if(n2_base_10 == n1_base_10[i])
				{
					n1_found_in = i;
					n2_found_in = base;
					found = true;
				}
			}
		}
		if(n1=="0" && n2=="0")
			cout<<"0 (base 2) = 0 (base 2)"<<endl;
		else if(found)
			cout<<n1<<" (base "<<n1_found_in<<") = "<<n2<<" (base "<<n2_found_in<<")"<<endl;
		else
			cout<<n1<<" is not equal to "<<n2<<" in any base 2..36"<<endl;
	}
	
	return 0;
}
