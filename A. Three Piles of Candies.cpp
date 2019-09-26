#include<cstdio>
#include<algorithm>
using namespace std;
long long max(long long arr[]){
	sort(arr,arr+3);
	long long alice=arr[0],bob=arr[1];
	long long res=bob-alice;
	alice+=res;
	arr[2]-=res;
	return alice+(arr[2]/2);
}
int main(){
	int query;
	scanf("%d",&query);
	while(query--){
		long long pile[5];
		for(int i=0;i<3;i++){
			scanf("%lld",&pile[i]);
		}
		printf("%lld\n",max(pile));
	}
	
	
	return 0;
}
