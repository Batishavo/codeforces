#include<bits/stdc++.h>
using namespace std;
const int lim=1e6;
int arr[lim];
int main(){
	int n,pos=1;
	while((scanf("%d",&n))!=EOF){
		arr[pos]=n;
		sort(arr,arr+pos+1);
		if(pos%2==0){
			printf("%d\n",(arr[pos/2]+arr[pos/2+1])/2);
		}
		else{
			printf("%d\n",arr[pos/2+1]);
		}
		pos++;
	}
	
	
	return 0;
}
