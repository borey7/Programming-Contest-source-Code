#include<iostream>
#include<fstream>

using namespace std;

main(){
		
		int digits[3000]={0},sum[1000]={0};
		/**
		digits[3000] because 1000!<1000^1000
		if1000 have 3 digits
		if1000^2=1000000 have 6 (3*2) 
		then 1000^1000 have 3*1000 digits = 3000 digits
		**/
		digits[0]=1;//because fac of any available number at least =1;
		int remain =0;
		for(int i=1;i<=1000;i++){
			
			for(int j=0;j<=2999;j++){				
				remain = digits[j]*i+remain;					
				digits[j]=remain%10;				
				remain=remain/10;				
			}
			
			for(int j=0;j<=2999;j++){	
				sum[i]+=digits[j];
			}		
		}
		int n;
		while(scanf("%d",&n)==1)
			cout << sum[n] << endl;
}
