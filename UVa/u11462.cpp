//11462

#include<iostream>
#include<algorithm>

int main()
{
	freopen("input/u11462.in","r",stdin);
	int T;
	int N;
	while(1)
	{
		scanf("%d", &N);
		if(N == 0) break;
		int age[N];
		for(int i=0; i<N; i++) { scanf("%d",&age[i]); }		
		std::sort(age, age + N);
		for(int i=0; i<N-1; i++) { printf("%d ",age[i]); }
		printf("%d\n",age[N-1]);
	}
	return 0;
}
