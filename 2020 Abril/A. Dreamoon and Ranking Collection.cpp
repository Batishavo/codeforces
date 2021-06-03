#include<bits/stdc++.h>
using namespace std;
const int lim=1e6;
int arr[lim];
int main(){
	int q;
	scanf("%d",&q);
	while(q--){
		for(int i=0;i<=100;i++){
			arr[i]=0;
		}
		int n,x;
		scanf("%d %d",&n,&x);
		for(int i=0;i<n;i++){
			int aux;
			scanf("%d",&aux);
			arr[aux]=1;
		}
		int cont=0;
		for(int i=1;i<=100;i++){
			cont=i;
			if(arr[i]==0){
				x--;
				if(x<0){
					//printf("\n__%d \n",i);
					break;
				}
			}
		//	printf("%d ",arr[i]);
		//	cont++;
		}
		cout<<cont+x<<endl;
	}
	return 0;
}

