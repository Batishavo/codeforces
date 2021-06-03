#include<bits/stdc++.h>
using namespace std;
const int lim=1e5;
long long arr[lim+5];
long long k;
int n;
string cad;
void relleno(){
	long long sum=0;
	for(int i=0;i<lim;i++){
		sum+=i+1;
		cad+='a';
		arr[i]=sum;
	}
}
int bynary(long long x){
	int ini=0,fin=n-2;
	while(ini<fin){
		int mid=(ini+fin)/2;
		if(arr[mid]<x){
			ini=mid+1;	
		}
		else{
			fin=mid;
		}
	}
	return ini;
}
int main(){
	int q;
	scanf("%d",&q);
	relleno();
	while(q--){
		scanf("%d %lld",&n,&k);
		int pos1=bynary(k);
		k=k-arr[pos1-1];
	    //cout<<k<<" "<<arr[pos1-1]<<endl;
		pos1=n-2-pos1;
		cad[pos1]='b';
		cad[n-k]='b';
		if(k==1){
			cad[n-1]='b';
		}
		cout<<cad.substr(0,n)<<endl;
		cad[pos1]='a';
		cad[n-k]='a';
		if(k==1){
			cad[n-1]='a';
		}
	}
	return 0;
}
