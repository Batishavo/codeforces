#include<cstdio>
#include<algorithm>
using namespace std;
int arr[5];
bool can(int p1,int p2){
	int aux1=arr[1]-p1;
	int aux2=arr[1]-p2;
	if(p2+aux1==arr[2] && p1+p2+aux1==arr[3]){
		printf("%d %d %d\n",p1,p2,aux1);
		return true;
	}
	if(p1+aux2==arr[2] && p1+p2+aux2==arr[3]){
		printf("%d %d %d\n",p1,p2,aux2);
		return true;
	}
	return false;
}
void dp(int p1,int p2){
	if(can(p1,p2)){
		return;
	}
	dp(p1-1,p2+1);
}
int main(){
	for(int i=0;i<4;i++){
		scanf("%d",&arr[i]);
	}
	sort(arr,arr+4);
	int num=arr[0];
	dp(num,0);
	return 0;
}
