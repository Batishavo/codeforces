#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
	int q;
	scanf("%d",&q);
	while(q--){
		scanf("%d",&n);
		int cont=1;
		for(int i=2;i<=30;i++){
			cont+=pow(2,i-1);
			if(n%cont==0){
				cout<<n/cont<<endl;
				break;
			}
		}
	}
	
	
	return 0;
}
