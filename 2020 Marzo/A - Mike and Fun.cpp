#include<bits/stdc++.h>
using namespace std;
int mat[600][600];
int arr[600];
int n,m,q,mayo=0;
void change(int i){
	int cont=0;
	arr[i]=0;
		for(int j=0;j<m;j++){
			if(mat[i][j]==1){
				cont++;
			}
			else{
				cont=0;
			}
		arr[i]=max(cont,arr[i]);
	}
}
int main(){
	scanf("%d %d %d",&n,&m,&q);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&mat[i][j]);
		}
		change(i);		
	}
	while(q--){
		int i,j;
		mayo=0;
		scanf("%d %d",&i,&j);
		if(mat[i-1][j-1]==0){
			mat[i-1][j-1]=1;
		}
		else{
			mat[i-1][j-1]=0;
		}
		change(i-1);
		for(int x=0;x<n;x++){
			mayo=max(mayo,arr[x]);
		}
		printf("%d\n",mayo);
	}
	return 0;
}
