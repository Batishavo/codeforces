#include<cstdio>
int n,cont;
void c21(int sum,int p){
	if(p>=n){
		if(sum==21){
			cont++;
		}
		return;
	}
	if(sum>21){
		return;
	}
	for(int i=0;i<=9;i++){
		c21(sum+i,p+1);
	}
}
int main(){
	scanf("%d",&n);
	c21(0,0);
	printf("%d",cont);
	
}
