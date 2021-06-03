#include<bits/stdc++.h>
using namespace std;
string cad[20];
double cord[20][5];
int use[20];
int n;
double dp(){
	double total=0;
	int tam=0;
	for(int i=0;i<n*2;i++){
		if(tam==7){
			break;
		}
		if(use[i]==0){
			double tmp=100000;
			int pos=i+1;
			for(int j=i+1;j<n*2;j++){
				if(use[j]==0){
					double aux=sqrt((pow((cord[i][0]-cord[j][0]),2))+((pow((cord[i][1]-cord[j][1]),2))));
					if (aux<tmp){
						tmp=aux;
						pos=j;
					}
				}
			}
			use[pos]=1;
			total+=tmp;	
			tam++;
		}
	}	
	for(int i=0;i<20;i++){
		use[i]=0;
	}
	return total;
}
int main(){
	int cont=1;
	while(true){
		scanf("%d",&n);
		if(n==0){
			break;
		}
		for(int i=0;i<n*2;i++){
			cin>>cad[i]>>cord[i][0]>>cord[i][1];		
		}
		printf("Case %d: %.2lf",cont++,dp());
	}
	
	return 0;
}
