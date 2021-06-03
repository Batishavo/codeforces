#include<bits/stdc++.h>
using namespace std;
int main(){
	int q;
	scanf("%d",&q);
	while(q--){
		int n,m;
		scanf("%d %d",&n,&m);
		if(n>=m){
			int aux=n%m;
			printf("%d\n",(aux==0)?aux:m-aux);
			
		}
		else{
			printf("%d\n",m-n);
		}
	}
	
	
}
