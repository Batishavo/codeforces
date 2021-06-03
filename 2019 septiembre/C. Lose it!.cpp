#include<cstdio>
const int lim=5e6;
int num[7]={4,8,15,16,23,42};
int bucket[lim][9];
int arr[lim];
int n,res;
void mark(){
	int pivote=0;
	for(int i=0;i<n;i++){
		if(arr[i]==num[0]){
			pivote++;
		}
		bucket[i][0]=pivote;
	}
	for(int i=1;i<6;i++){
		pivote=0;
		for(int j=0;j<n;j++){
			if(arr[j]==num[i]){
				if(bucket[j][i-1]>pivote){
					pivote++;
				}
				else{
					res++;
				}
			}
			bucket[j][i]=pivote;
		}
	}
	int cosa=bucket[n-1][5];
	for(int i=5;i>=0;i--){
		res+=bucket[n-1][i]-cosa;
	}
}
int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	mark();
	printf("%d\n",res);
	return 0;
}
