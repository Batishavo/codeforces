#include<cstdio>
const long long lim=1e18;
long long arr[1000];
int cont;
long long sum;
void calc(){
	long long pot=1;
	while(pot<lim){
		sum+=pot;
		arr[cont++]=pot;
		pot*=3;
	}
	sum+=pot;
	arr[cont++]=pot;
}
int main(){
	calc();
	int q;
	scanf("%d",&q);
	while(q--){
		long long n;
		scanf("%lld",&n);
		long long tmp=sum;
		for(int i=cont-1;i>=0;i--){
			if(tmp-arr[i]>=n){
			
				tmp-=arr[i];
			}
		}
		printf("%lld\n",tmp);
		
	}
	return 0;
}
