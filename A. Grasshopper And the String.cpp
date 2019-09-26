#include<iostream>
using namespace std;
string cad;
int salida;
int main(){
	cin>>cad;
	int tmp=0;
	for(int i=0;i<cad.length();i++){
		tmp++;
		if(cad[i]=='A'||cad[i]=='E'||cad[i]=='I'||cad[i]=='O'||
		cad[i]=='U'||cad[i]=='Y'){
			if(tmp>salida){
				salida=tmp;
			}
			tmp=0;
		}
	}
	if(tmp>salida){
		salida=tmp+1;
	}
	cout<<salida<<endl;
	return 0;
}
