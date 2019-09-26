#include<cstdio>
long long exit(long long n,long long m,long long k){
	long long cant_masha=n%k,cant_sasha=m%k;
	long long sub=(cant_masha+cant_sasha)%k;
	if(cant_masha-sub>=0 && cant_masha<cant_sasha){
		return cant_masha-sub;
	}
	else if(cant_sasha-sub>=0){
		return cant_sasha-sub;
	}
	else{
		return 0;
	}
}
int main(){
	long long n,m,k;
	scanf("%lld %lld %lld",&n,&m,&k);
	printf("%lld %lld\n",(n+m)/k,exit(n,m,k));	
	return 0;
}
