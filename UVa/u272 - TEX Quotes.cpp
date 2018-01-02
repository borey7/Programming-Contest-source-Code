#include<iostream>
#include<string>

using namespace std;

int main()
{
	bool first=true;	
	string s;
	while(getline(cin,s))
	{
		for(int i=0;i<s.length();i++)	
		{		
			if(s[i]==34)
			{
				if(first)
				{					
					putchar((char)96);
					putchar((char)96);
				}
				else
				{					
					putchar((char)39);
					putchar((char)39);
				}
				first = !first;								
			}			
			else
				putchar(s[i]);	
		}
		putchar('\n');
	}
	return 0;
}
