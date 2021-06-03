#include<cstdio>
#include<algorithm>
using namespace std;
int n,use,total;
int arr[200],bucket[200];
int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	sort(arr,arr+n);
	while(use<n){
		int act,pos;
		for(int i=0;i<n;i++){
			if(bucket[i]==0){
				bucket[i]=1;
				pos=i;
				act=arr[i];
				total++;
				use++;
				break;
			}
		}
		for(int i=pos;i<n;i++){
			if(arr[i]%act==0 && bucket[i]==0){
				bucket[i]=1;
				use++;
			}
		}
	}
	printf("%d\n",total);
	return 0;
}
