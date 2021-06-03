#include<bits/stdc++.h>
using namespace std;
int arr[1005];
int main(){
	int q;
	scanf("%d",&q);
	while(q--){
		int n;
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%d",&arr[i]);
		}
		sort(arr,arr+n);
		int flag=1;
		for(int i=0;i<n-1;i++){
			if(abs(arr[i]-arr[i+1])>1){
				flag=0;
				break;
			}
		}
		if(flag){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}
