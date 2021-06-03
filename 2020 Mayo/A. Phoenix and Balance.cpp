#include<bits/stdc++.h>
using namespace std;
int main(){
	int q;
	scanf("%d",&q);
	long long a=0,b=0;
	while(q--){
		int n;
		a=0;b=0;
		scanf("%d",&n);
		for(int i=n-1;i>=n/2;i--){
			a+=pow(2,i);
		//	cout<<pow(2,i)<<" ";
		}
		//printf("\n");
		for(int i=1;i<n/2;i++){
			b+=pow(2,i);
		//	cout<<pow(2,i)<<" ";
		}
		b+=pow(2,n);
		//cout<<pow(2,n)<<endl;
		printf("%lld\n",abs(a-b));
		
	}
	return 0;
}
