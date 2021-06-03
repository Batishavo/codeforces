#include<bits/stdc++.h>
using namespace std;
int arr[2000];
int main(){
	int q;
	scanf("%d",&q);
	while(q--){
		int n;
		int sum=0;
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			int aux;
			scanf("%d",&arr[i]);
			sum+=arr[i];
		}
		int menor=abs(sum-n);
		for(int i=2;i<=300000;i++){
			menor=min(menor,abs(sum-(i*n)));
		}
		printf("%d\n",menor);
	}
	return 0;	
}
