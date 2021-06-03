#include<bits/stdc++.h>
using namespace std;
const int lim=1e7;
int arr[lim],aux[lim];
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		for(int i=1;i<=n;i++){
			scanf("%d",&arr[i]);
			aux[i]=1;
		}
		for(int i=1;i<=n;i++){
			for(int j=i+i;j<=n;j+=i){
				if(arr[j]>arr[i]){
					
					aux[j]=max(aux[j],aux[i]+1);
				}	
			}
		}
		int mayor=1;
		for(int i=1;i<=n;i++){
			mayor=max(mayor,aux[i]);
		}
		printf("%d\n",mayor);
	}
	
	return 0;
}
