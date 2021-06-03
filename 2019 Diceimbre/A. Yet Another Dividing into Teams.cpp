#include<cstdio>
#include<algorithm>
using namespace std;
int arr[1000];
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
		int flag=0;
		for(int i=1;i<n;i++){
			if(abs(arr[i]-arr[i-1])==1){
				flag=1;
			}
		}
		if(flag==1){
			printf("2\n");
		}
		else{
			printf("1\n");
		}
	}
	
	return 0;
}
