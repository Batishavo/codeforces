#include<bits/stdc++.h>
using namespace std;
const long long lim=pow(2,31);
int main(){
	int n;
	while(true){
		scanf("%lld",&n);
		if(n==0){
			break;
		}
		long long cont=0,a=0,b=0,tmp=lim;
		while(n!=0 && tmp>0){
		///	printf("%lld\n",tmp);
			if(n-tmp>=0){
		//		printf("%lld\n",tmp);
				if(cont%2==0){
					a+=tmp;
				}
				else{
					b+=tmp;
				}
				n-=tmp;
				cont++;
			}
			tmp/=2;
		}
		if(cont%2==0){
			printf("%lld %lld\n",b,a);	
		}
		else{
			printf("%lld %lld\n",a,b);
		}
		
	}
	return 0;
}
