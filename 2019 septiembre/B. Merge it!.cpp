#include<cstdio>
int main(){
	int queris;
	scanf("%d",&queris);
	while(queris--){
		int n;
		int cont=0,two=0,one=0;
		scanf("%d",&n);
		while(n--){
			int aux;
			scanf("%d",&aux);
			switch (aux%3){
				case 0:
					cont++;
				break;
				case 1:
					one++;
				break;
				case 2:
					two++;
				break;	
				
			}
		}
		if(two>one){
			two-=one;
			cont+=one;
			one=0;
		}
		else{
			one-=two;
			cont+=two;
			two=0;
		}
		cont+=one/3;
		cont+=two/3;
		printf("%d\n",cont);
	}	
	return 0;
}
