#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
int cont=0;
int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		int k;
		scanf("%d",&k);
		long long  bucket[5000]={0};
		while(k--){
			char caracter;
			int valor;
			cin>>caracter>>valor;
			bucket[caracter]=valor;
		}
		int m;
		double cant=0;
		scanf("%d",&m);
		cin.ignore();
		for(int i=0;i<m;i++){
			char string[10005];
			gets(string);
			int long_string=strlen(string);
			for(int j=0;j<long_string;j++){
				cant+=bucket[string[j]];
			}	
		}
		printf("%0.2lf$\n",cant/100);
	}	
	return 0;
}
