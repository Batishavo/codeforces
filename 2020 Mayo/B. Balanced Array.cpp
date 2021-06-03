#include<bits/stdc++.h>
using namespace std;
int main(){
	int q;
	scanf("%d",&q);
	while(q--){
		int n;
		scanf("%d",&n);
		if(n%4==0){
			printf("YES\n");
			n/=2;
			for(int i=1;i<=n;i++){
				printf("%d ",i*2);
			}
			for(int i=1;i<n;i++){
				printf("%d ",i*2-1);
			}
			printf("%d\n",3*n-1);
		}
		else{
			printf("NO\n");
		}
		
		
	}
	return 0;
}

