#include<cstdio>
int n,arr[500],mayor;
bool can(int ini,int fin){
	for(int i=ini+1;i<=fin;i++){
		if(arr[i-1]>arr[i]){
			return false;
		}
	}
	return true;
}
void dp(int ini,int fin){
	if(can(ini,fin)){
		int tmp=fin-ini+1;
		if(tmp>mayor){
			mayor=tmp;
		}
		return ;
	}
	int mid=(ini+fin)/2;
	dp(ini,mid);
	dp(mid+1,fin);
}
int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	dp(0,n-1);
	printf("%d\n",mayor);
	return 0;
}
