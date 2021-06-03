#include<bits/stdc++.h>
using namespace std;
const int lim=1e6;
int arr[lim];
int main(){
	int n,pos=0;
	whille((scanf("%d",&n))!=EOF){
		arr[pos++]=n;
		sort(arr,arr+pos);
		if(n%2==0){
			printf("%d\n",(arr[n/2]+arr[n/2+1])/2);
		}
		else{
			printf("%d\n",arr[n/2]);
		}
	}
	
	
	return 0;
}
