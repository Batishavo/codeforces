#include<bits/stdc++.h>
using namespace std;
int arr[100];
int tmp_men[100];
int tmp_max[100];
int main(){
	int q;
	scanf("%d",&q);
	while(q--){
		int n;
		scanf("%d",&n);
		for(int i=0;i<n*2;i++){
			scanf("%d",&arr[i]);
		}	
		sort(arr,arr+(n*2));
		for(int i=0;i<n;i++){
			tmp_men[i]=arr[i];
			tmp_max[i]=arr[n+i];
		}	
		for(int i=0;i<n;i++){
			printf("%d %d ",tmp_men[i],tmp_max[i]);
		}	
		printf("\n");
			
		
	}
	return 0;
}
