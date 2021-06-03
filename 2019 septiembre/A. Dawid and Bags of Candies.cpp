#include<cstdio>
#include<algorithm>
using namespace std;
int total;
int arr[6];
int dp(int pos,int sum){
	if(pos>=4){
		if(total-sum==sum){
			return 1;
		}
		return 0;
	}
	return max(dp(pos+1,sum+arr[pos]),dp(pos+1,sum));
}
int main(){
	for(int i=0;i<4;i++){
		scanf("%d",&arr[i]);
		total+=arr[i];
	}
	printf((dp(0,0)>=1)?"YES\n":"NO\n");
	return 0;
}
