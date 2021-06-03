#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n,m;
	while(true){
		scanf("%lld %lld",&n,&m);	
		if(n==0 && m==0){
			break;
		}
		long long mid=(n/2)+1;
		if(m==1){
			printf("Line = %lld, column = %lld.\n",mid,mid);
			continue;
		}
		long long line=2;
		long long acumulado=1,pot=1;	
		while(acumulado+(8*pot)<m){
			acumulado+=8*pot;
			pot++;
			line+=2;
		//	printf("--%lld %lld\n",pot,acumulado);
		}
		long long tmp=m-acumulado;
		int num=0;
	//	printf("%lld %lld\n",tmp,line);
		while(tmp-line>0){
			tmp-=line;
			num++;
		}
		int a=0,b=0;
		//printf("%lld\n",pot);
		switch (num){
			case 0:
				a=mid+pot;
				b=n-tmp-mid+pot+1;
			//	printf("*");
				break;
			case 1:
				b=mid-pot;
				a=n-tmp-mid+pot+1;;
				break;
			case 2:
				a=mid-pot;
				b=tmp+mid-pot;
				break;
			case 3:
				b=mid+pot;
				a=tmp+mid-pot;
				break;	
		}
		printf("Line = %lld, column = %lld.\n",a,b);
		
	}
	return 0;
}
