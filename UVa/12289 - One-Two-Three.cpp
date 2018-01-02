#include<iostream>

using namespace std;

int main()
{
	
	//freopen("input/u12289.txt","r",stdin);
	//freopen("input/u12289output.txt","w",stdout);
	int n;
	cin>>n;
	string number[10] = 
					{
						"one","two","three","four","five",
						"six","seven","eight","nine","ten"
					};
	while(n--)
	{
		string num;
		cin>>num;
		int ans = 0;
		for(int i=0;i<10;i++)
		{
			if(number[i] == num)
			{
				ans = i+1;
				break;
			}
			else if(number[i].length() == num.length())
			{
				int equal = 0;
				for(int c=0;c<num.length() && equal<2;c++)
				{
					if(num[c] != number[i][c]) equal++;
					if(equal>=2) break;
				}
				if(equal == 1) ans = i+1;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
