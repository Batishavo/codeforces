#include<cstdio>
int n,mat[20],flag;
void dp(int pos,int sum){
	if(flag==1){
		return;
	}
	if(pos>=n){
		if(sum==0 || sum%360==0){
			flag=1;
		}
		return;
	}
	dp(pos+1,sum+mat[pos]);
	dp(pos+1,sum-mat[pos]);
}
int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&mat[i]);
	}
	dp(0,0);
	if(flag==1){
		printf("YES");
	}
	else{
		printf("NO");
	}
	return 0;
}
