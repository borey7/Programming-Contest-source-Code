#include<iostream>

using namespace std;

int main ()
{
	//freopen("input/u13130.in", "r", stdin);
	int CASE ;
	cin >> CASE;
	while (CASE--)
	{
		string num = "";
		char temp;
		for(int i=0;i<5;i++)		
		{
			cin>>temp;
			num += temp;
		}
		cout<<(num == "12345" || num == "23456" ? "Y" : "N")<<endl;
	}
	return 0;
}
