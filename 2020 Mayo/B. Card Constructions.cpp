#include<bits/stdc++.h>
using namespace std;
const int lim=1e9,tam=1e5;
long long arr[tam];
int lon;
void begin(){
	long long tmp=0;
	arr[0]=2;
	long long ant=2;
	for(int i=1;;i++){
		ant+=2;
		tmp=arr[i-1]+ant+i;
		lon=i;
		arr[i]=tmp;
	//	printf("%d %d %d\n",ant,tmp,i);
		if(tmp>lim){
			break;
		}
	}
}
long long bynary(long long n){
	int ini=0,fin=lon-1;
	while(ini<fin){
		int mid=((ini+fin)/2)+1;
        if(arr[mid]>n){
			fin=mid-1;
		}
		else{
			ini=mid;
		}
	}
	return arr[ini];
}
int main(){
	begin();
	//printf("%d\n",lon);
	int q;
	scanf("%d",&q);
	while(q--){
		long long n;
		scanf("%lld",&n);
		int cont=0;
		while(n>1){
		//	printf("%d %d \n",n,bynary(n));
			n-=bynary(n);
			cont++;
		}
		
		printf("%d\n",cont);
	}
	return 0;
}
