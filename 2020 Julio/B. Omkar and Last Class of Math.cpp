#include<bits/stdc++.h>
using namespace std;
const int lim=1e9;
int mcm(int n,int m){
	int menor=min(n,m);
	int mayor=max(n,m);
	while(menor!=0){
		int tmp=menor;
		menor=mayor%menor;	
		mayor=tmp;
	}
//	printf("%d\n",mayor);
	return mayor;
}
int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		int m;
		int a,b;
		int menor=lim;
		scanf("%d",&m);
		for(int i=sqrt(n);i>=1;i--){
			int tmp=((m-i)*i)/mcm(m-i,i);
			if(tmp<menor){
				a=i;
				b=m-i;
				menor=tmp;
			}
		}	
		printf("%d %d\n",b,a);
	}
	return 0;
}
