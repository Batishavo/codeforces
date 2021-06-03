#include<bits/stdc++.h>
using namespace std;
int main(){
	int q;
	scanf("%d",&q);
	while(q--){
		long long n,m,a,b;
		scanf("%lld %lld %lld %lld",&n,&m,&a,&b);
		if((a>=0 && b>=0)|| (a<0 && b<0)){
			n=abs(n);
			m=abs(m);
			long long tmp=(min(n,m)*b)+((max(n,m)-min(n,m))*a);
			printf("%lld\n",min(n*a+m*a,tmp));
		}
		else{
			printf("%lld\n",(abs(n)*a)+(abs(m)*a));	
		}
	}
	
	return 0;
}
