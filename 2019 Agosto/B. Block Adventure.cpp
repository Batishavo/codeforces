#include<cstdio>
int n,cubos,k,ant,flag=1;
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		flag=1;
		scanf("%d %d %d %d",&n,&cubos,&k,&ant);
		for(int i=1;i<n;i++){
			int aux;
			scanf("%d",&aux);
			int temp;
			if(aux-k>=0){
				temp=aux-k;
			}
			else{
				temp=0;
			}
			if(ant>temp){
				cubos+=ant-temp;
			}
			else{
				if(cubos+ant<temp){
					flag=0;
				}
				else{
					cubos-=temp-ant;		
				}
			}
			ant=aux;
		}
		if(flag==1){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}
