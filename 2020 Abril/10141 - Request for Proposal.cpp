#include<bits/stdc++.h>
using namespace std;
int lim=1e7;
string comp="";
void rebuild(char aux[200]){
	comp="";
	int lon=strlen(aux);
	for(int i=0;i<lon;i++){
		comp+=aux[i];
	}
}
int main(){
	int n,m,cont=1;
	int flag=1;
	while(true){
		scanf("%d %d",&n,&m);
		if(n==0 && m==0){
			break;
		}
		scanf("\n");
		int mayor=0;
		int menor=(double)lim;
		for(int i=0;i<n;i++){
			char aux[200];
			gets(aux);
	
		}
		//cout<<"--"<<endl;
		//scanf("\n");
		for(int i=0;i<m;i++){
			char cosa[200];
		   // cout<<"cadena"<<endl;
			//scanf("\n");
			gets(cosa);
			//scanf("\n");	
			//cout<<"datos"<<endl;
			double price;
			int cant;
			cin>>price>>cant;
			//cout<<price<<"--"<<cant<<endl;
			scanf("\n");
			if(cant>mayor){
			   mayor=cant;
			   menor=price;
			   rebuild(cosa);
			   //comp=aux;
			}
			if(cant==mayor && price<menor){
				menor=price;
				rebuild(cosa);
				//comp=aux;
			}	
			for(int j=0;j<cant;j++){
				char tmp[200];
				gets(tmp);
				//scanf("\n");
				//cout<<"_____"<<tmp<<endl;
			}
			//cout<<"XXX"<<comp<<endl;
		}
		if(cont>1){
			cout<<endl;

		}
		cout<<"RFP #"<<cont<<endl;
		cout<<comp<<endl;
		cont++;
	}
	
	
	return 0;
}
