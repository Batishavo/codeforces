#include<bits/stdc++.h>
using namespace std;
const int lim=1e6;
int arr[lim];
int sum[lim];
int main(){
	int q;
	scanf("%d",&q);
	while(q--){
		int n,m,pos=1,cont=0;
		scanf("%d %d",&n,&m);
		for(int i=0;i<n;i++){
			scanf("%d",&arr[i]);
		}
		for(int i=1;i<n-1;i++){
			if(arr[i]>arr[i+1] && arr[i]>arr[i-1]){
				sum[i]=1;
			}
			if(i<m){
				cont+=sum[i];
			}
		}
		int tmp=cont;
		for(int i=m;i<n;i++){	
			tmp-=sum[i-m-2];
			tmp+=sum[i-1];
			if(tmp>cont){
				cont=tmp;
				pos=i-m+2;
			}
		}
		printf("--%d %d\n",cont+1,pos);
		for(int i=0;i<n;i++){
			sum[i]=0;
		}
	}
	return 0;
}
