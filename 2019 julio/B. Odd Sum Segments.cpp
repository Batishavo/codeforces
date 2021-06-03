#include<cstdio>
using namespace std;
const int lim=5e6;
int  arr[lim+10];
int main(){
	int q;
	int n,k,cant,num;
	scanf("%d",&q);
	for(int j=0;j<q;j++){
		cant=0;
		scanf("%d %d",&n,&k);
		for(int i=0;i<n;i++){
			int aux;
			scanf("%d",&aux);
			if(aux%2!=0){
				arr[cant++]=i+1;
			}
		}
		if(cant<k || cant%2!=k%2){
			printf("NO\n");
		}
		else if(cant==k){
			printf("YES\n");
			for(int i=0;i<cant-1;i++){
				printf("%d ",arr[i]);
			}
			printf("%d\n",n);
		}
		else{
			printf("YES\n");
			for(int i=0;i<k-1;i++){
				printf("%d ",arr[i]);
			}
			printf("%d\n",n);
		
		}
		
	}
	return 0;
}
