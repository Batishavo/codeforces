#include<cstdio>
const int lim=2e5;
int mat[lim][5];
int n,m;
void clean(int num){
	for(int i=1;i<=n;i++){
		mat[i][0]=num;
		mat[i][1]=num;	
	}
}
void cosa(int a,int b){
	for(int i=b;;i--){		
		if(i==0){
			printf("* ");
			break;
		}
		if(mat[i][0]==-1){
			if(i<a){
				printf("%d ",i);
				break;
			}
			mat[i][0]=a-1;
		}
		else{
			i=mat[i][0]+1;
		}
	}
	/*printf("---");
	for(int i=1;i<=n;i++){
			printf("%d ",mat[i][0]);
		}
	printf("--");*/
	for(int i=a;;i++){
		if(i==n+1){
			printf("*");
			break;
		}
		if(mat[i][1]==-1){
			if(i>b){
				printf("%d",i);
				break;
			}
			mat[i][1]=b+1;
		}
		else{
			i=mat[i][1]-1;
		}
	}
	printf("\n");
}
int main(){
	while(true){
		scanf("%d %d",&n,&m);
		clean(-1);
		if(n==0 && m==0){
			break;
		}	
		int a,b;
		for(int i=0;i<m;i++){
			scanf("%d %d",&a,&b);
			cosa(a,b);
		}
		printf("-\n");
	}
	return 0;
}
