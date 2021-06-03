#include<bits/stdc++.h>
using namespace std;
int main(){
	int q;
	scanf("%d",&q);
	while(q--){
		long long a,b,c,d;
		scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
		
		printf("__________\n");
		if(a>b && c<=d){
			printf("-1\n");
		}	
		else if(a<=b){
			printf("%lld\n",b);
		}
		else{
			long long tmp=c-d;
			long long res=a-b;	
			long long time=res/tmp;
			//printf("%lld %lld %lld\n",time,tmp,res);
			time+=(res%tmp==0)?0:1;
			//printf("%lld %lld\n",time,time*tmp);
			printf("%lld\n",b+(time*c));
		}
		
	}
	return 0;
}
