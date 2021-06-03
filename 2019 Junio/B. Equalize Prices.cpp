#include<cstdio>
#include<stdlib.h>
using namespace std;
const long long lim=1e10;
bool can(){
	
}
int main(){
	int queris;
	scanf("%d",&queris);
	while(queris--){
		int n;
		long long m,menor=lim,mayor=0;
		scanf("%d %lld",&n,&m);
		for(int i=0;i<n;i++){
			long long aux;
			scanf("%lld",&aux);
			mayor=(mayor>aux)?mayor:aux;
			menor=(menor<aux)?menor:aux;
		}
		if(abs(menor+m-mayor)<=m){
			printf("%lld\n",menor+m);
		}
		else{
			printf("-1\n");
		}
	}
	return 0;
}
