#include<cstdio>
#include<iostream>
using namespace std;
int main(){
	int q;
	scanf("%d",&q);
	while(q--){
		int cont=0,mayor=0;
		int n;
		string cad;
		cin>>n>>cad;
		for(int i=n-1;i>=0;i--){
			if(cad[i]=='P'){
				cont++;
			}
			else{
				if(cont>mayor){
					mayor=cont;
				}
				cont=0;
			}
			
		}
		printf("%d\n",mayor);
	}
}
