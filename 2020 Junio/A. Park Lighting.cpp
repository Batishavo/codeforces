#include<cstdio>
int main(){
	int test;
	scanf("%d",&test);
	while(test--){
		int n,m;
		scanf("%d %d",&n,&m);
		printf("%d\n",((n*m)%2==0)?(n*m)/2:((n*m)/2)+1);
	}
	return 0;
}
