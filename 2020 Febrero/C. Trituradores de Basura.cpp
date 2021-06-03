#include<bits/stdc++.h>
using namespace std;
int arr[10000];
int use[30000];
int cont=0;
int mat[4][4]={{1,2,3},{4,5,6},{7,8,9},{-1,0,-1}};
void exploid(int i,int j,int num){
	//printf("%d\n",num);
	for(int x=0;x<4;x++){
		for(int y=0;y<3;y++){
			int tmp=(num*10)+mat[x][y];
			if(mat[x][y]!=-1&& x>=i && y>=j && use[tmp]==0 && tmp<=999){
				use[tmp]=1;
				exploid(x,y,tmp);
				
			}
		}
	}
}
void llenar(){
	for(int i=0;i<4;i++){
		for(int j=0;j<3;j++){
			if(mat[i][j]!=-1){
				use[mat[i][j]]=1;
				//printf("______");
				exploid(i,j,mat[i][j]);
			}
		}
	}
}
int main(){
	llenar();
	for(int i=0;i<=999;i++){
		if(use[i]==1){
			arr[cont++]=i;
		}	
	}
	int q;
	scanf("%d",&q);
	while(q--){
		int n;
		scanf("%d",&n);
		for(int i=0;i<cont;i++){
			if(arr[i]==n){
				printf("%d\n",arr[i]);
				break;
			}
			else if(arr[i]>n){
				printf("%d\n",(abs(n-arr[i])<abs(n-arr[i-1]))?arr[i]:arr[i-1]);
				break;
			}
		}
	}
	return 0;
}
