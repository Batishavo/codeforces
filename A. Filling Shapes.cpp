#include<cstdio>
int n;
int main(){
	scanf("%d",&n);
	if(n%2!=0){
		printf("0\n");
	}
	else{
		long long exit=1;
		while(n>1){
			n-=2;
			exit*=2;
		//	printf("%d %d\n",exit,n);
		}
		printf("%lld\n",exit);
	}
	return 0;
}
