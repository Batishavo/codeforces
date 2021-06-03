#include<bits/stdc++.h>
using namespace std;
int main(){
	while(true){
		string cad;
		getline(cin,cad);
		if(cad=="Game Over"){
			break;
		}
		int cont=0;
		char ant='0';
		cad+="  ";
		int sum[25],pos=0;
		for(int i=0;i<cad.length();i+=2){
			if(cad[i]>='0' && cad[i]<='9'){
				sum[pos++]=cad[i]-'0';
			}
			else if(cad[i]=='X'){
				sum[pos++]=10;
			}
			else if(cad[i]=='/'){
				sum[pos++]=10-(ant-'0');
			}
			ant=cad[i];
		}
		int pm=0;
		for(int i=0;i<pos;i++){
			if(pm==10)break;
		    if(sum[i]==10){
		    	cont+=sum[i];
				cont+=sum[i+1];
				cont+=sum[i+2];
				pm++;
			}
			else if(sum[i]+sum[i+1]==10){
				cont+=sum[i]+sum[i+1]+sum[i+2];
				i++;
				pm++;
			}
			else{
				cont+=sum[i]+sum[i+1];
				pm++;
				i++;
			}
		//	cout<<cont<<" "<<cad[i]<<" "<<endl;
		}
		cout<<cont<<endl;
	}
	
	return 0;
}
