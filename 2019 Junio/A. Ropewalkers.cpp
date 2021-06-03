#include<cstdio>
#include<algorithm>
#include<stdlib.h>
using namespace std;
int arr[5];
int main(){
	for(int i=0;i<4;i++){
		scanf("%d",&arr[i]);
	}
	sort(arr,arr+3);
	int sum=0;
	int tam1=abs(arr[0]-arr[1]);
	int tam2=abs(arr[1]-arr[2]);
	if(tam1<arr[3]){
		sum+=arr[3]-tam1;
	}
	if(tam2<arr[3]){
		sum+=arr[3]-tam2;
	}
	printf("%d\n",sum);
	return 0;
}
