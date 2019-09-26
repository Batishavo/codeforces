#include<cstdio>
long long  n,m;
long long bynary(){
	long long ini=0,fin=n;
	while(ini<fin){
		long long mid=((ini+fin)/2);
		long long cant=n-mid;
		long long sum=(cant*(cant+1))/2;
		if(sum-mid>m){
			ini=mid+1;
		}
		else{
			fin=mid;
		}
	}
	return ini;
}
int main(){
	scanf("%lld %lld",&n,&m);
	printf("%lld\n",bynary());
	return 0;
}
