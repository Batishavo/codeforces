#include<bits/stdc++.h>
using namespace std;
int main(){
	int q;
	scanf("%d",&q);
	while(q--){
		long long n,m;
		scanf("%lld %lld",&n,&m);
		for(long long i=1;i<m;i++){
			long long total=n;
			long long big=0,litle=9;
			while(total>0){
				big=max(big,total%10);
				litle=min(litle,total%10);
				total/=10;
			}
			n+=big*litle;
			if(litle==0 || big==0){
				break;
			}
		}	
		printf("%lld\n",n);
	}
	return 0;
}
