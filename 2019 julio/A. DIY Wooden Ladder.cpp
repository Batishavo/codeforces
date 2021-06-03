#include<cstdio>
#include<algorithm>
using namespace std;
const int lim=1e6;
int arr[lim];
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%d",&arr[i]);
		}	
		sort(arr,arr+n);
		int l=arr[n-2];
		printf("%d\n",(l-1<n-2)?l-1:n-2);
	}
	return 0;
}
