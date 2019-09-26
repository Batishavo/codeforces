#include<cstdio>
const int lim=1e3;
char mat[lim][lim],mat2[lim][lim],mat3[lim][lim],mat4[lim][lim];
char min_mat[lim][lim];
void cant(int n,int m){
	int cont=0,cont2=0,cont3=0,cont4=0;
	for(int i=0;i<=n-m;i++){
		for(int j=0;j<=n-m;j++){
			int flag=0,flag2=0,flag3=0,flag4=0;
			for(int c=0;c<m;c++){
				for(int x=0;x<m;x++){
					if(min_mat[c][x]!=mat[i+c][j+x]){
						flag=1;
					}
					if(min_mat[c][x]!=mat2[i+c][j+x]){
						flag2=1;
					}
					if(min_mat[c][x]!=mat3[i+c][j+x]){
						flag3=1;
					}
					if(min_mat[c][x]!=mat4[i+c][j+x]){
						flag4=1;
					}
				}
			}	
			if(flag==0){
				cont++;
			}
			if(flag2==0){
				cont2++;
			}
			if(flag3==0){
				cont3++;
			}
			if(flag4==0){
				cont4++;
			}
		}
	}
	printf("%d %d %d %d\n",cont,cont2,cont3,cont4);
}
void made_mat(int n){
	int aux=0;
	for(int i=n-1;i>=0;i--){
		for(int j=0;j<n;j++){
			//		printf("%c",mat[j][i]);
			mat2[aux][j]=mat[j][i];
		}	
		aux++;
	}
	int temp=0;
	aux=0;
	for(int i=n-1;i>=0;i--){
		temp=0;
		for(int j=n-1;j>=0;j--){
	//		printf("%c",mat[i][j]);
			mat3[aux][temp]=mat[i][j];
			temp++;
		}
		aux++;
	}
	aux=0;
	for(int i=0;i<n;i++){
		for(int j=n-1;j>=0;j--){
			//printf("%c",mat[j][i]);
			mat4[i][aux]=mat[j][i];
			aux++;
		}
		aux=0;
	}
}
int main(){
	int n,m;
	while((scanf("%d %d",&n,&m))){
		if(n==0 && m==0){
			return 0;
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				scanf(" %c",&mat[i][j]);
			}	
		}
		for(int i=0;i<m;i++){
			for(int j=0;j<m;j++){
				scanf(" %c",&min_mat[i][j]);
			}	
		}
		made_mat(n);
		/*for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				printf("%c",mat2[i][j]);
			}
			printf("\n");
		}
		printf("____________\n");
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				printf("%c",mat3[i][j]);
			}
			printf("\n");
		}
		printf("____________\n");
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				printf("%c",mat4[i][j]);
			}
			printf("\n");
		}
		printf("____________\n");*/
		cant(n,m);
	}
	return 0;
}
