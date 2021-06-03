#include<bits/stdc++.h>
using namespace std;
const int lim=1e6;
int arr[lim];
int arr2[lim];
int main(){
	int q;
	scanf("%d",&q);
	while(q--){
		int n,pos=0,neg=0,flag=0;
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%d",&arr[i]);
			if(arr[i]==1){
				pos++;
			}
			else if(arr[i]==-1){
				neg++;
			}
		}
		for(int i=0;i<n;i++){
			scanf("%d",&arr2[i]);
		}
		for(int i=n-1;i>=0;i--){
		//	printf("%d ",arr[i]);
			if(arr[i]==1){
				pos--;
			}
			else if(arr[i]==-1){
				neg--;
			}
			if((arr[i]>arr2[i] && neg<=0 )||
			   (arr[i]<arr2[i] && pos<=0 )){
			//   	printf("__%d %d %d\n",i,arr[i],arr2[i]);
				flag=1;
				break;
			}
		}
		printf((flag?"NO\n":"YES\n"));
	}
	return 0;
}
