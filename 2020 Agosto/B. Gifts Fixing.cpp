#include<bits/stdc++.h>
using namespace std;
long long candies[60];
long long oranges[60];
int main(){
	int q;
	scanf("%d",&q);
	while(q--){
		int n;
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%lld",&candies[i]);	
		}
		for(int i=0;i<n;i++){
			scanf("%lld",&oranges[i]);
		}
		long long minOranges=oranges[0];
		long long minCandies=candies[0];
		for(int i=0;i<n;i++){
			minOranges=min(oranges[i],minOranges);
			minCandies=min(candies[i],minCandies);
		}
		long long cant=0;
		for(int i=0;i<n;i++){
			long long a=oranges[i]-minOranges;
			long long b=candies[i]-minCandies;
			cant+=max(a,b);
		}
		printf("%lld\n",cant);
	}
	
	return 0;
}
