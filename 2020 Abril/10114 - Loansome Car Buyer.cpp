#include<bits/stdc++.h>
using namespace std;
int main(){
	double arr[200];
	while(true){
		double total,paiment;
		int dep,months;
		cin>>months>>paiment>>total>>dep;
		if(months<0){
			break;
		}
		int pos;
		double p;
		for(int i=0;i<dep;i++){
			cin>>pos>>p;
			for(int j=pos;j<=100;j++){
				arr[j]=p;	
			}
		}
		int cont=0;
		double pagoMensual=total/months;
		double depresacion=(total+paiment)*(1-arr[0]);
		double deuda=total;
		while(depresacion<deuda){
			cont++;
			deuda-=pagoMensual;
			depresacion*=(1-arr[cont]);
		}
		if(cont<=1){
			cout<<"1 month"<<endl;
		}
		else{
			cout<<cont<<" months"<<endl;
		}
		
	}
	
	return 0;
}

