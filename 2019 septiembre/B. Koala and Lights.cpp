#include<cstdio>
#include<iostream>
using namespace std;
int n;
string cad;
int mat[200][1000];
void mark(int ai,int bi,int pos){
	int tmp=0;
	if(cad[pos]=='1'){
		tmp=1;
	}
	else{
		tmp=0;
	}
	for(int i=0;i<bi;i++){
		mat[pos][i]=tmp;
	}
//	tmp=(tmp==1)?0:1;
	for(int i=bi;i<995;i++){
		if((i-bi)%ai==0){
			tmp=(tmp==1)?0:1;
		//	printf("ccc%d %d\n",pos,i);
		}
		mat[pos][i]=tmp;
	}
	
}
int main(){
	cin>>n;
	cin>>cad;
	int mayor=0;
	for(int i=0;i<n;i++){
		int tmp1,tmp2;
		scanf("%d %d",&tmp1,&tmp2);
		mark(tmp1,tmp2,i);
	}
	for(int i=0;i<995;i++){
		int cont=0;
		for(int j=0;j<n;j++){
			if(mat[j][i]==1){
				cont++;
			}
		}
		mayor=(mayor>cont)?mayor:cont;
	}
	cout<<mayor<<endl;
	return 0;
}
