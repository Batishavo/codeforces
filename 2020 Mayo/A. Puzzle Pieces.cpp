#include<bits/stdc++.h>
using namespace std;
int main(){
	int q;
	int n,m;
	scanf("%d",&q);
	while(q--){
		scanf("%d %d",&n,&m);
		if(n==1 || m==1 ||(n==2 && m==2)){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}
