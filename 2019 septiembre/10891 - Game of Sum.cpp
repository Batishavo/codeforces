#include<cstdio>
#include <stdlib.h> 
const int lim=1e4;
int arr[lim];
int mayor(int n){
	int resultado=arr[n-1];
	for(int i=0;i<n;i++){
		int temp=arr[n-1]-arr[i];
		if(temp>resultado){
		//	printf("%d %d\n",temp,i);
			resultado=temp;
		}
		//resultado=(temp>resultado)?temp:resultado;
	}
	return resultado;
}
int main(){
	int n;
	while(scanf("%d",&n)){
		if(n==0){
			break;
		}
		for(int i=0;i<n;i++){
			int aux;
			scanf("%d",&aux);
			arr[i]=arr[i-1]+aux;
		}
		printf("%d\n",mayor(n));
		for(int i=0;i<n;i++){
			arr[i]=0;
		}
	}
	return 0;
}
