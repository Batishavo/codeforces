#include<iostream>
using namespace std;
string cad,aux;
void cambio(int l,int r,int k){
	int tam=0;
	if(k>(r-(l-1))){
		tam=k%(r-l+1);	
	}
	else{
		tam=k;
	}
	printf("%d\n",tam);
	aux=cad;
	int cont=0;
	for(int i=l-1+tam;i<r;i++){
		cad[i]=aux[i-tam];
	}
	//cout<<cad<<endl;
	for(int i=l-1;i<l+tam-1;i++,cont++){
		cad[i]=aux[r-tam+cont];
	//	cout<<cad[i]<<endl;
	}
	//cout<<cad<<endl;
	
}
int main(){
	cin>>cad;
	int m;
	cin>>m;
	while(m--){
		int l,r,k;
		cin>>l>>r>>k;
		cambio(l,r,k);
	}
	cout<<cad;
	return 0;
}
