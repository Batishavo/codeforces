#include<bits/stdc++.h>
using namespace std;
int arr[200];
int mark[100];
int main(){
	int q;
	scanf("%d",&q);
	while(q--){
		int n;
		scanf("%d",&n);
		for(int i=0;i<2*n;i++){
			scanf("%d",&arr[i]);
		}
		vector<int>nums;
		for(int i=0;i<2*n;i++){
			if(mark[arr[i]]==0){
				mark[arr[i]]=1;
				nums.push_back(arr[i]);
			}
		}
		for(int x:nums){
			printf("%d ",x);
			mark[x]=0;
		}
		printf("\n");
	}
	return 0;
}
