#include<cstdio>
int n,m;
int main(){
	scanf("%d %d",&n,&m);
	int num=n-m;
	if(num==1 || num==-1 || num==0)
		printf("YES\n");
	else
		printf("NO\n");	
	return 0;
}
