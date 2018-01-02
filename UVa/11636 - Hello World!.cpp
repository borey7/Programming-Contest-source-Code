//11636 - Hello World!

#include<iostream>
#include<cmath>

int main()
{	
	//N < 10001
	int N[10001] = {0};
	int p=0;
	for(int i=2;i<10001;i++)
	{				
		while(i > pow(2,p)) p++;		
		N[i] = p;			
	}
	
	int n;
	int c=0;
	while(1)
	{
		c++;
		scanf("%d",&n);
		if(n<0) break;
		printf("Case %d: %d\n",c,N[n]);
	}
	return 0;
}
