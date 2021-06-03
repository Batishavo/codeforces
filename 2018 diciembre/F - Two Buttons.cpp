#include<cstdio>
int n,m;
int cont;
void fun(int n,int m){
	if(n>m){
		cont+=n-m;
		return ;
	}
	else if(n==m)
		return ;
	else if(m%2==0){
		cont++;
		fun(n,m/2);
	}	
	else {
		fun(n,m+1);
		cont++;
	}
		
		
}
int main(){
	scanf("%d %d",&n,&m);
	fun(n,m);
	printf("%d\n",cont);
	return 0;
}
