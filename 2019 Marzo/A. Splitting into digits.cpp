#include<cstdio>
int n,num;
int main(){
	scanf("%d",&n);
	for(int i=9;i>=1;i--){
		if(n%i==0){
			num=i;
			break;	
		}
	}
	printf("%d\n",n/num);
	while(n>0){
		n-=num;
		printf("%d ",num);
	}
	return 0;
}
