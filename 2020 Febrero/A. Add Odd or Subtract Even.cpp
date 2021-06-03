#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	scanf("%d",&test);
	while(test--){
		int n,m,cont=0;
		scanf("%d %d",&n,&m);
		if(n>m){
			int tmp=n-m;
			if(tmp%2==0){
				cont=1;
			}
			else{
				cont=2;
			}
		}
		else if(n<m){
			int tmp=m-n;
			if(tmp%2==0){
				cont=2;
			}
			else{
				cont=1;
			}
		}
		printf("%d\n",cont);
	} 
	return 0;
}
