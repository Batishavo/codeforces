#include<cstdio>
int n,m,odd,notodd,cont;
int main(){
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++){
		int aux;
		scanf("%d",&aux);
		if(aux%2==0){
			notodd++;
		}
		else{
			odd++;
		}
	}
	for(int i=0;i<m;i++){
		int aux;
		scanf("%d",&aux);
		if(aux%2==0 && odd>0){
			odd--;
			cont++;
		}
		if(aux%2!=0 && notodd>0){
			notodd--;
			cont++;
		}
		
	}
	printf("%d\n",cont);
	return 0;
}
