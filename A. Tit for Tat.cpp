#include<bits/stdc++.h>
using namespace std;
int arr[100];
int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		int ele,k;
		scanf("%d %d",&ele,&k);
		for(int i=0;i<ele;i++){
			scanf("%d",&arr[i]);
		}
		int piv=0;
		while(piv<ele-1 && k>0){
			if(arr[piv]>=k){
				arr[ele-1]+=k;
				arr[piv]-=k;
				k=0;
			}
			else{
				arr[ele-1]+=arr[piv];
				arr[piv]=0;
				k-=arr[piv];
				cout<<"::::::::::"<<endl;
				
			}		
			piv++;
		}
		for(int i=0;i<ele;i++){
			printf("%d ",arr[i]);
		}
		printf("\n");
	}
	return 0;
}
