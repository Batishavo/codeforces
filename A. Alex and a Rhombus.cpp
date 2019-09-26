#include<cstdio>
int n,cont=1;
int main(){
	scanf("%d",&n);
	for(int i=1;i<n;i++){
		cont+=i*4;
	}
	printf("%d\n",cont);
}
