#include<cstdio>
#include<algorithm>
using namespace std;
int queris;
int main(){
	scanf("%d",&queris);
	while(queris--){
		int arr[5];
		for(int i=0;i<4;i++){
			scanf("%d",&arr[i]);
		}
		sort(arr,arr+4);
		printf("%d %d\n",arr[0],arr[3]);
	}
	return 0;
}
