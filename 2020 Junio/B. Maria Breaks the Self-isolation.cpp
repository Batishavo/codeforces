#include<bits/stdc++.h>
using namespace std;
const int lim=1e6;
int arr[lim];
int main(){
	int test;
	scanf("%d",&test);
	while(test--){
		int n;	
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%d",&arr[i]);
		}
		sort(arr,arr+n);
		int total=0;
		for(int i=n-1;i>=0;i--){
			//printf("%d %d\n",arr[i],i);
			if(arr[i]<=i+1){
				total=i+1;
				break;
			}
		}
		printf("%d\n",total+1);
	}
	return 0;
}
