#include<iostream>
using namespace std;
string comp;
int menor(string cad,int n,int m){
	int resultado=5000;
	//start R
	for(int i=0;i<=n-m;i++){
		int cont=0;
		for(int j=0;j<m;j++){
			if(cad[i+j]!=comp[j]){
				cont++;
			}
		}
		if(cont<resultado){
		//	printf("x\n");
			resultado=cont;
		}
	}
	//start G
	for(int i=0;i<=n-m;i++){
		int cont=0;
		for(int j=1;j<m+1;j++){
			if(cad[i+j-1]!=comp[j]){
				cont++;
			}
		}
		if(cont<resultado){
			resultado=cont;
		}
	}
	//start B
	for(int i=0;i<=n-m;i++){
		int cont=0;
		for(int j=2;j<m+2;j++){
			if(cad[i+j-2]!=comp[j]){
				cont++;
			}
		}
		if(cont<resultado){
			resultado=cont;
		}
	}
	return resultado;
}
int main(){
	for(int i=0;i<3000;i++){
		if(i%3==0){
			comp+="R";
		}
		else if(i%3==1){
			comp+="G";
		}
		else{
			comp+="B";
		}
	}
	int q;
	cin>>q;
	while(q--){
		int n,m;
		string cad;
		cin>>n>>m>>cad;
		printf("%d\n",menor(cad,n,m));
	}
	return 0;
}
