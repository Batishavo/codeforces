#include<cstdio>
int arr[300];
int cant(int ini){
	int pos=arr[ini];
	int cont=1;
	while(pos!=ini){
	//	printf("%d %d\n",pos,arr[pos]);
		pos=arr[pos];
		cont++;
	}
	return cont;
}
int main(){
	int q;
	scanf("%d",&q);
	while(q--){
		int n;
		scanf("%d",&n);
		for(int i=1;i<=n;i++){
			scanf("%d",&arr[i]);
		}
		for(int i=1;i<=n;i++){
			printf("%d ",cant(i));
		}
		printf("\n");
	}
	return 0;
}
