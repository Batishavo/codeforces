#include<bits/stdc++.h>
using namespace std;
int mat[105][8];
int n;
void clean(){
	for(int i=0;i<100;i++){
		for(int j=0;j<4;j++){
			mat[i][j]=0;
		}
	}
}
int main(){
	while(true){
		scanf("%d",&n);
		if(n==0){
			break;
		}	
		clean;
		int tmp=n/4;
		tmp+=(n%4!=0)?1:0;
		int cont=1;
		for(int i=0;i<tmp;i++){
			for(int j=1;j<=2;j++){
				mat[i][j]=cont++;
			}
		}
		for(int i=tmp-1;i>=0;i--){
			mat[i][3]=cont++;
			mat[i][0]=cont++;
		}
		printf("Printing order for %d pages:\n",n);
		for(int i=0;i<tmp;i++){
			printf("Sheet %d, front: ",i+1);
			if((mat[i][0]>n)){
				printf("Blank, ");
			}
			else{
				printf("%d, ",mat[i][0]);
			}
			if((mat[i][1]>n)){
				printf("Blank\n");
			}
			else{
				printf("%d\n",mat[i][1]);
			}
			//////
			if(mat[i][2]<=n || mat[i][3]<=n){
				printf("Sheet %d, back : ",i+1);
			//	printf("%d %d\n",mat[i][2],mat[i][3]);
				if((mat[i][2]>n)){
					printf("Blank, ");
				}
				else{
					printf("%d, ",mat[i][2]);
				}
				if((mat[i][3]>n)){
					printf("Blank\n");
				}
				else{
					printf("%d\n",mat[i][3]);
				}		
			}
		
			//////
		}
	}
	return 0;
}
