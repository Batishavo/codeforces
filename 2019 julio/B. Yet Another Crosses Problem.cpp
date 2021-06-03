#include<cstdio>
#include<iostream>
using namespace std;
int queris;
const int lim=1e5;
string mat[lim+5];
int n,m,max_n,max_m;
int cont_n[lim+5],cont_m[lim+5];
void vaciar(){
	for(int i=0;i<n;i++){
		cont_m[i]=0;
		cont_n[i]=0;
	}
	for(int i=0;i<m;i++){
		cont_m[i]=0;
		cont_n[i]=0;
	}
}
int main(){
	scanf("%d",&queris);
	while(queris--){
		int salida=3*lim;
		max_n=0,max_m=0;
		scanf("%d %d",&n,&m);
		int flag_n=0,flag_m=0;
		for(int i=0;i<n;i++){
			int tmp=0;
			cin>>mat[i];
			for(int j=0;j<m;j++){
				if(mat[i][j]=='*'){
					tmp++;
					cont_n[j]++;
				}
			}
			cont_m[i]=tmp;
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				int res=0;
				if(mat[i][j]=='.'){
					res=-1;
				}
				salida=(salida<m-cont_n[j]+n-cont_m[i]+res)?salida:m-cont_n[j]+n-cont_m[i]+res;
			}
		}
		vaciar();
		printf("%d\n",salida);
	}
	
	return 0;
}
