#include<cstdio>
#include<vector>
using namespace std;
int n,m,cant;
int arr[200],bucket[200];
int main(){
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++){
		int aux;
		scanf("%d",&aux);
		if(bucket[aux]==0){
			arr[cant++]=i+1;
			bucket[aux]=1;
		}
	}
	if(cant>=m){
		printf("YES\n");
		for(int i=0;i<m;i++){
			printf("%d ",arr[i]);
		}
			
	}
	else{
		printf("NO\n");
	}
	return 0;
}
