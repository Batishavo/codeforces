#include<bits/stdc++.h>
using namespace std;
map<int,int>memo;
int main(){
	int q;
	scanf("%d",&q);
	while(q--){
		int n,cont=0;
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			int tmp;
			scanf("%d",&tmp);
			if(memo[tmp]==0){
				memo[tmp]=1;	
				cont++;
			}
			
		}
		printf("%d\n",cont);
		memo.clear();
	}
	return 0;
}
