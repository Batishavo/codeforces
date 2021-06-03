#include<cstdio>
int main(){
	int test;
	scanf("%d",&test);
	while(test--){
		int n;
		scanf("%d",&n);
		if(n==2){
			printf("2\n");
		}
		else if(n==1){
			printf("3\n");
		}
		else if(n%2==0){
			printf("0\n");
		}
		else{
			printf("1\n");
		}
		
	}
	
	return 0;
}
