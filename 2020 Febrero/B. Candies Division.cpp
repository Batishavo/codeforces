#include<bits/stdc++.h>
using namespace std;
int main(){
	int q;
	scanf("%d",&q);
	while(q--){
		int n,m;
		scanf("%d %d",&n,&m);
		int cant=n-(n%m);
		int tmp=n%m;
		cant+=min((m/2),tmp);
		printf("%d\n",cant);
	}
	
	return 0;
}
