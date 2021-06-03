#include<cstdio>
int main(){
	int val1=6,val2=10,val3=14,val4=15;
	int n;
	scanf("%d",&n);
	while(n--){
		int m;
		scanf("%d",&m);
		if(m<=30){
			printf("NO\n");
		}
		else{
			if(m-30==6 || m-30==10 ||m-30==14 ){
				printf("YES\n6 10 15 %d\n",m-31);
			}
			else{
				printf("YES\n6 10 14 %d\n",m-30);
			}
		}
		
	}
	return 0;
}
