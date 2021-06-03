#include<bits/stdc++.h>
using namespace std;
const int lim=1e6;
int arr[lim];
int mark[200];
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		for(int i='a';i<='z';i++)mark[i]=0;
		int n,m;
		string cad;
		scanf("%d %d",&n,&m);
		cin>>cad;
		for(int i=0;i<m;i++){
			int tmp;
			scanf("%d",&tmp);
			arr[tmp]++;
		}
		for(int i=1;i<=n;i++){
			mark[cad[i-1]]+=m+1;
			m-=arr[i];
		}
		for(int i='a';i<='z';i++){
			printf("%d ",mark[i]);
		}
		printf("\n");
		for(int i=1;i<=n;i++){
			arr[i]=0;
		}
	}
	return 0;
}
