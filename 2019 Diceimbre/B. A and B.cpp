#include<cstdio>
#include <stdlib.h>     
int main(){
	int q;
	scanf("%d",&q);
	while(q--){
		int n,m;
		scanf("%d %d",&n,&m);
		int num=abs(n-m);
		if(n==m){
			printf("0\n");
		}
		else{
			int sum=0;
			for(int i=1;;i++){
				sum+=i;
				if(sum>=num && (sum-num)%2==0){
					printf("%d\n",i);
					break;
				}
			}	
		}	
	}
	return 0;
}
