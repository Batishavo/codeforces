#include<cstdio>
int n,m,cont;

int main(){
	scanf("%d %d",&n,&m);
	int tmp=1;
	for(int i=0;i<n;i++){
		int aux,aux2;
		scanf("%d %d",&aux,&aux2);
		int salto=aux-tmp;
		cont+=aux2+1-aux;
		cont+=(salto)%m;
		tmp=aux2+1;
	}
	printf("%d\n",cont);
	return 0;
}
