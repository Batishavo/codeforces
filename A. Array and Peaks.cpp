#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,k;	
		scanf("%d %d",&n,&k);
		int a=1,b=n;
		if((n%2==0 && k<n/2)||(n%2!=0 && k<=n/2)){
			for(int i=1;i<=n;i++){
				if(i%2==0 && k>0){
					printf("%d ",b--);
					k--;
				}
				else{
					printf("%d ",a++);
				}
			}
			printf("\n");
		}
		else{
			printf("-1\n");
		}
		
	}
	return 0;
	//printf("%d",5/2);
}
