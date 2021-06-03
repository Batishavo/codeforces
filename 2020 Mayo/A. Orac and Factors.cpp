#include<bits/stdc++.h>
using namespace std;
int main(){
	int q;
	scanf("%d",&q);
	while(q--){
		long long n,k;
		scanf("%lld %lld",&n,&k);
		long long cont=n;
		if(cont%2!=0){
			k--;
			int flag=1;
			for(int i=3;i<=sqrt(n);i++){
				if(n%i==0){
					cont+=i;
					flag=0;
					break;
				}
			}
			if(flag==1)
				cont+=n;	
		}
		cont+=k*2;
		printf("%lld\n",cont);
	}
	return 0;
}
