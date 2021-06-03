#include<cstdio>
int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		int l1,r1,l2,r2;
		scanf("%d %d %d %d",&l1,&r1,&l2,&r2);
		int salida= (l1<r1)?l1:r1;
		int salida2=(l2>r2)?l2:r2;
		printf("%d %d\n",salida,(salida==salida)?salida2-1:salida2);
	}	
	return 0;
}
