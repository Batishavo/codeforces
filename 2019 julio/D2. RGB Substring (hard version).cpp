#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
const int lim=2e5;
int q;
string cad_r,cad_g,cad_b;
void cad(){
	for(int i=0;i<lim+10;i++){
		if(i%3==0){
			cad_r+="R";
			cad_g+="G";
			cad_b+="B";
		}
		else if(i%3==1){
			cad_r+="G";
			cad_g+="B";
			cad_b+="R";
		}
		else{
			cad_r+="B";
			cad_g+="R";
			cad_b+="G";
		}
	}
}
int menor(string cad,int n,int m){
	int cont_r=0,cont_g=0,cont_b=0;
	for(int i=0;i<m;i++){
		if(cad_r[i]!=cad[i]){
			cont_r++;
		//	cout<<"||"<<cad_r[i]<<" "<<cad[i]<< "  R ";
		}
		if(cad_g[i]!=cad[i]){
			cont_g++;
		//	cout<<"||"<<cad_g[i]<<" "<<cad[i]<< "  G ";
		}
		if(cad_b[i]!=cad[i]){
			cont_b++;
		//	cout<<"||"<<cad_b[i]<<" "<<cad[i]<< "  B ";
		}
		//cout<<endl;
	}
	int menor=min(cont_r,min(cont_g,cont_b));
	//printf("y %d %d\n",menor,m);
	for(int i=1;i<=n-m;i++){
		//sumas
		if(cad_r[i+m-1]!=cad[i+m-1]){
			cont_r++;
			//cout<<"xr ";
		}
		if(cad_g[i+m-1]!=cad[i+m-1]){
			cont_g++;
			//cout<<"xg ";
		}
		if(cad_b[i+m-1]!=cad[i+m-1]){
			cont_b++;
			//cout<<"xb ";
		}
		////Restas
		if(cad_r[i-1]!=cad[i-1]){
			cont_r--;
			//cout<<"b ";
		}
		if(cad_g[i-1]!=cad[i-1]){
			cont_g--;
			//cout<<"g ";
		}
		if(cad_b[i-1]!=cad[i-1]){
			cont_b--;
			//cout<<"b ";
		}
		//printf("x%d %d\n",menor,i);
		if(cont_r<menor){
			menor=cont_r;
		//	cout<<"Es R"<<endl;
		}
		if(cont_g<menor){
			menor=cont_g;
		//	cout<<"Es G"<<endl;
		}
		if(cont_b<menor){
			menor=cont_b;
		//	cout<<"Es B"<<endl;
		}
	}
	return menor;
}
int main(){
	cad();
	scanf("%d",&q);
	while(q--){
		int n,m;
		string cad;
		cin>>n>>m>>cad;
		if(n==0 || m==0){
			
		}
		printf("%d\n",menor(cad,n,m));
	}
	return 0;
}
