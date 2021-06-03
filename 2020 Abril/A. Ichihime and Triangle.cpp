#include<bits/stdc++.h>
using namespace std;
int main(){
	int q;
	long long a,b,c,d;
	scanf("%d",&q);
	while(q--){
		scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
		if(a+b<=c || a+c<=b || c+b<=a){

		    if(a+b<=c){
				long long tmp=c-a-b+1;
				long long tmp2=b-a;
				long long tmp3=c-b;
				//printf("%d %d %d\n",tmp,tmp2,tmp3);
				if(tmp>tmp2){
					a+=tmp2;
					tmp-=tmp2;
				}
				else{
					a+=tmp;
					tmp=0;
				}
				b+=tmp;
			}
			else if(a+c<=b){
				long long tmp=b-a-c+1;
				long long tmp2=b-a;
				long long tmp3=d-c;
				if(tmp>tmp2){
					a+=tmp2;
					tmp-=tmp2;
				}
				else{
					a+=tmp;
					tmp=0;
				}
				c+=tmp;
			}
			else if(b+c<=a){
				long long tmp=a-b-c+1;
				long long tmp2=c-b;
				long long tmp3=d-c;
				if(tmp>tmp2){
					b+=tmp2;
					tmp-=tmp2;
				}
				else{
					b+=tmp;
					tmp=0;
				}
				c+=tmp;
			}
			
		}
		printf("%lld %lld %lld\n",a,b,c);
	}
	
	
	return 0;
}
