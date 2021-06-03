#include<cstdio>
int n,m,salida;
int main(){
	scanf("%d %d",&n,&m);
	int aux=m/n;
	if(m%n!=0){
		printf("-1\n");
	}
	else{
		while(aux>1){
			if(aux%3==0){
				aux/=3;
			}
			else if(aux%2==0){
				aux/=2;
			}
			else{
				salida=-1;
				break;
			}
			salida++;
		}
		printf("%d\n",salida);
	}
	
	return 0;
}
