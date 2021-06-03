#include<bits/stdc++.h>
using namespace std;
int arr[100];
int memo[100];
int cant(int n){
	for(int i=2;;i++){
		for(int j=0;j<=n;j++){
			int aux=i+arr[j];
			int tmp=sqrt(aux);
			if(j==n){
				return i-1;
			}
		    if(memo[j]==0){
			//	printf("--%d %d\n",arr[j],i);
				arr[j]=i;
				memo[j]=1;
				break;
			}
			if(tmp*tmp==aux){
			//	printf("%d %d\n",arr[j],i);
				arr[j]=i;
				break;
			}
	
		}
	}	
	return -1;
	
}
void clear(){
	for(int i=0;i<100;i++){
		arr[i]=0;
		memo[i]=0;
	}
	arr[0]=1;
	memo[0]=1;
}
int main(){
	int q;
	scanf("%d",&q);
	while(q--){
		clear();
		int n;
		scanf("%d",&n);
		printf("%d\n",cant(n));
	}
	return 0;
}
