#include<cstdio>
#include <string.h>
#include<iostream>
using namespace std;
int mat[200][200];
int memo[200][200];
char tmp;
void mark(int i){
	for(int x='A';x<=tmp;x++){
		if(mat[i][x]==1 && memo[i][x]==0){
			memo[i][x]=1;
			mark(x);
		}
	}
}
void clear(){
	for(int i='A';i<=tmp;i++){
		for(int j='A';j<=tmp;j++){
			mat[i][j]=0;
			memo[i][j]=0;
		}
	}
}
int main(){
	int q;
	scanf("%d ",&q);
	int flag=0;
	//printf("....");
	while(q--){
		clear();
		char aux[10];
		gets(aux);
		tmp=aux[0];
		for(int i='A';i<=tmp;i++){
			mat[i][i]=1;
		}
		//cout<<"_______"<<endl;
		char cad[20];
		//printf("_______");
		while(gets(cad)){
			
	    //	printf("___");
			
		//	printf("XXX%s\n",cad);
			if(strlen(cad)==0){
				break;
			}
			mat[cad[0]][cad[1]]=1;
			mat[cad[1]][cad[0]]=1;
		}	
		int cont=0;
		for(int i='A';i<=tmp;i++){
			for(int j='A';j<=tmp;j++){
				if(mat[i][j]==1 && memo[i][j]==0){
					cont++;
					mark(i);	
				}
			}
		}
		if(flag!=0){
			printf("\n");
		}
		printf("%d\n",cont);
		flag=1;
	}
	return 0;
}
