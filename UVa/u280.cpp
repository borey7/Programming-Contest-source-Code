//uva 280

#include<bits/stdc++.h>

using namespace std;



int main()
{
	int n;
	cin>>n;
	while(n!=0)
	{
		bool initVertex[n+1][n+1];
		memset(initVertex, false, (n+1)*(n+1));
		
		int terminate;
		cin>>terminate;
		while(terminate!=0)
		{
			int startV = terminate;
			int last;
			cin>>last;
			while(last!=0)
			{
				initVertex[startV][last] = true;
				cin>>last;
			}
			cin>>terminate;
		}
		//end input
		
		int q;
		cin>>q;
		while(q--)
		{
			int s;
			cin>>s;
			
			//find
			bool visited[n+1];
			memset(visited, false, sizeof(visited[0]) * (n+1));
			
			queue <int> Q;
			
			for(int j=1;j<=n;j++)
			{
				if(initVertex[s][j])
				{
					Q.push(j);		
				}
			}
			
//			cout<<"first Q: "<<Q.front()<<endl;
			
			int cur;
			while(!Q.empty())
			{
				cur = Q.front();
				Q.pop();
				
//				cout<<"--front of Q:"<<cur;
//				cout<<" , removed front of Q"<<endl;
				
				if(visited[cur]) 
				{
//					cout<<" --but already visited"<<endl;					
					continue;					
				}
//				cout<<" -- "<<cur<<" not visit yet, set "<<cur<<" as visited "<<endl;
				visited[cur] = true;
				
//				cout<<"\tgo to check node "<<cur<<endl;
				for(int idx = 1; idx <= n; idx++)
				{
					if(initVertex[cur][idx]) 
					{
						if(visited[idx]) 
						{
//							cout<<" \t\t"<<idx<<" already visited, don't add to Q"<<endl;	
							continue;
						}
//						cout<<"\t\tadd to Q: "<<idx<<endl;						
						Q.push(idx);
					}
				}
			}
			
			int count = 0;
						
			for(int j=1;j<=n;j++)
			{
				if(!visited[j]) count++;
			}
			cout<<count;
			for(int i=1;i<=n;i++)
			{
				if(!visited[i]) cout<<" "<<i;
			}
			cout<<endl;
		}						
		cin>>n;
	}
	return 0;
}
