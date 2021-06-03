#include<cstdio>
int cont,n,tmp=-1;
int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int aux;
		scanf("%d",&aux);
		if(aux>tmp){
			tmp=aux;
			cont++;
		}
	}
	printf("%d\n",cont);
	return 0;
}
