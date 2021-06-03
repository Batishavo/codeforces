#include<cstdio>
int num(long long n){
	int cont=0;
	while(n>1){
		if(n%2==0){
			n/=2;
			//printf("__________%lld\n",n);
		}
		else if(n%3==0){
			n=(n*2)/3;
			//printf("<<<<<<<<<<<%lld\n",n);
			
		}
		else if(n%5==0){
			n=(n*4)/5;
			//printf("zzzzzzzzzzz%lld\n",n);
		}
		else{
			//printf("yyyyyyyyy%d",n);
			return -1;
		}
		cont++;
	}
	return cont;
}
int main(){
	int queris;
	scanf("%d",&queris);
	while(queris--){
		long long n;
		scanf("%lld",&n);	
		printf("%d\n",num(n));
	}
	return 0;
}
