#include<bits/stdc++.h>
using namespace std;
int main(){
	long long arr[5];
	int q;
	scanf("%d",&q);
	while(q--){
		for(int i=0;i<3;i++){
			scanf("%lld",&arr[i]);
		}
		sort(arr,arr+3);
		if((arr[0]==arr[1] && arr[1]==arr[2])){
			printf("YES\n%lld %lld %lld\n",arr[0],arr[0],arr[0]);
		}
		else if(arr[2]==arr[1]){
			printf("YES\n%lld %lld %lld\n",arr[2],arr[0],1);
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}
