#include<bits/stdc++.h>
using namespace std;
const int lim=1e6;
map<long long,int>MyMap;
long long arr[lim];
int salida[lim][5];
int main(){
	int n,mayor=0,pos=0;
	long long temp=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
		MyMap[arr[i]]++;
		if(MyMap[arr[i]]>mayor){
			mayor=MyMap[arr[i]];
			pos=i;
			temp=arr[i];
		}
	}
//	printf("___%d %d\n",temp,pos);
	int cont=0;
	for(int i=pos+1;i<n;i++){
		if(arr[i]>temp){
			cont++;
			salida[i][0]=2;
		}
		else if(arr[i]<temp){
			cont++;
			salida[i][0]=1;
		}
		salida[i][1]=i+1;
		salida[i][2]=i;
	}
	for(int i=pos-1;i>=0;i--){
		if(arr[i]>temp){
			cont++;
			salida[i][0]=2;
		}
		else if(arr[i]<temp){
			cont++;
			salida[i][0]=1;
		}
		salida[i][1]=i+1;
		salida[i][2]=i+2;
	}
	printf("%d\n",cont);
	for(int i=pos+1;i<n;i++){
		if(salida[i][0]!=0){
			for(int j=0;j<3;j++){
				printf("%d ",salida[i][j]);	
			}
			printf("\n");
		}
	}
	for(int i=pos-1;i>=0;i--){
		if(salida[i][0]!=0){
			for(int j=0;j<3;j++){
				printf("%d ",salida[i][j]);	
			}
			printf("\n");
		}
	}
	return 0;
}
