#include<bits/stdc++.h>
using namespace std;
const int lim=2000;
int bucket[lim];
int main(){
	int q;
	scanf("%d",&q);
	while(q--){
		int n,m,tmp;
		scanf("%d %d",&n,&m);
		for(int i=0;i<n;i++){
			scanf("%d",&tmp);
			bucket[tmp]=1;
		}
		//printf("\n_______________\n");
		int flag=1,num=0;
		for(int j=0;j<m;j++){
			scanf("%d",&tmp);
			if(bucket[tmp]==1){
				flag=0;
				num=tmp;
			}
		}
		for(int i=1;i<=n;i++){
			bucket[i]=0;
		}
		if(flag==1){
			printf("NO\n");
		}
		else{
			printf("YES\n1 %d\n",num);
		}
	}
	
	return 0;
}
