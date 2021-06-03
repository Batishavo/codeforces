#include<bits/stdc++.h>
using namespace std;
int main(){
	int cases;
	scanf("%d",&cases);
	while(cases--){
		int n,m;
		scanf("%d %d",&n,&m);
		int cont=60-m;
		cont+=(23-n)*60;
		printf("%d\n",cont);	
	}
	return 0;
}
