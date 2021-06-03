#include<cstdio>
int n,m,k;
int main(){
	scanf("%d %d %d",&n,&m,&k);
	if(k>=n && m>=n){
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}
	return 0;
}
