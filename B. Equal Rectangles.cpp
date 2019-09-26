#include<cstdio>
#include<algorithm>
const int lim=1e5;
using namespace std;
int arr[lim];
bool can(int n){
	int pos=n-1;
	int product=arr[0]*arr[pos];
	for(int i=0;i<n/2;i+=2){
		if(arr[i]*arr[pos]!=product || arr[i]!=arr[i+1] || arr[pos]!=arr[pos-1]){
			return false;	
		}
		pos-=2;
	}
	return true;
}
int main(){
	int q;
	scanf("%d",&q);
	while(q--){
		int n;
		scanf("%d",&n);
		for(int i=0;i<n*4;i++){
			scanf("%d",&arr[i]);
		}
		sort(arr,arr+(n*4));
		if(can(n*4)){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}
