#include<cstdio>
int querys;
long long bynary(long long charge,long long turns,long long a,long long b){
	long long fin=charge/a,ini=0;
	while(fin>ini){
		long long mid=((fin+ini)/2)+1;
		long long aux=mid*a;
		long long temp=charge-aux;
		long long com=temp/b;
		long long energy=aux+(com*b);
		//printf("%lld %lld %lld %lld\n",energy,charge,mid,com);
		if(energy<=charge && mid+com>=turns){
			ini=mid;
		}
		else{
			fin=mid-1;	
		}
	}
	return ini;
}
int main(){
	scanf("%d",&querys);
	while(querys--){
		long long charge,turns,a,b;
		scanf("%lld %lld %lld %lld",&charge,&turns,&a,&b);
		if(turns*b<charge){
			long long temp=bynary(charge-1,turns,a,b);
			printf("%lld\n",(temp<turns)?temp:turns);
		}
		else{
			printf("-1\n");
		}
	}
	return 0;
}
