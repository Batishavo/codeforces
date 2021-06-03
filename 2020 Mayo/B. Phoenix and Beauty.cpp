#include<bits/stdc++.h>
using namespace std;
int main(){
	int q;
	scanf("%d",&q);
	while(q--){
		int n,k;
		set<int>dif;
		scanf("%d %d",&n,&k);	
		for(int i=0;i<n;i++){
			int tmp;
			scanf("%d",&tmp);
			dif.insert(tmp);
		}
		if(dif.size()>k){
			printf("-1\n");
		}
		else{
			printf("--%d\n",n*k);
			for(int i=0;i<n;i++){
				for(auto x:dif){
					printf("%d ",x);	
				}
				for(int j=0;j<k-(int)dif.size();j++){
					printf("1 ");
				}
			}
			printf("\n");
		}
	}
	return 0;
}
