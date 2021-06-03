#include<bits/stdc++.h>
using namespace std;
int arr[100];
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int cont=9;
	while(cont-n>0){
		cont-=n;
	}
//	printf("%d\n",cont);
	int tmp=arr[cont-1]+9;
	while(tmp-n>0){
		tmp-=n;
	}
	printf("%d\n",tmp);
	return 0;
}
