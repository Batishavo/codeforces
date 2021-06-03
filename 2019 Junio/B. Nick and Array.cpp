#include <stdio.h>      
#include <stdlib.h>
using namespace std;
const int lim=1e7;
int n,menor=100,pos;
int arr[lim];
int main(){	
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int aux;
		scanf("%d",&aux);
		if(aux>=0){
			aux=-aux-1;
		}
		arr[i]=aux;
		if(arr[i]<menor){
			menor=arr[i];
			pos=i;
		}
	}
	if(n%2!=0){
		arr[pos]=-arr[pos]-1;
	}
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
