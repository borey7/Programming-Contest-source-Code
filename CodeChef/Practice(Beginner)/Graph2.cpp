#include<bits/stdc++.h>

using namespace std;

int main()
{
	//number of vertic
	int v = 10;
	
	int AdjacencyMatrix[v+1][v+1];	
	memset(AdjacencyMatrix, 0, sizeof(AdjacencyMatrix));
	for(int r_=0;r_<v+1;r_++)
	{
		for(int c_=0;c_<v+1;c_++)
		{
			cout<<AdjacencyMatrix[r_][c_];			
		}
		cout<<endl;
	}
	return 0;
}
