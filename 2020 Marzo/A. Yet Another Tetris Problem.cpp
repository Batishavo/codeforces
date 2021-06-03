#include<bits/stdc++.h>
using namespace std;
int arr[1000];
int main(){
	int q;
	scanf("%d",&q);
	while(q--){
		int menor=1000;
		int n;
		scanf("%d",&n);	
		for(int i=0;i<n;i++){
			scanf("%d",&arr[i]);
			menor=min(arr[i],menor);
		}
		int flag=0;
		for(int i=0;i<n;i++){
			int tmp=arr[i]-menor;
			if(tmp%2!=0){
				flag=1;
				break;
			}
		}	
		printf((flag==0)?"YES\n":"NO\n");
	
	}
	return 0;
}
