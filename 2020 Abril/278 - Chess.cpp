#include<bits/stdc++.h>
using namespace std;
int main(){
	int q;
	scanf("%d",&q);
	while(q--){
		char pice;
		int n,m;
		cin>>pice>>n>>m;
		if(pice=='r' || pice=='Q'){
			cout<<min(n,m)<<endl;
		}
		else if(pice=='k'){
			int tmp=(n*m)%2!=0?1:0;
			//cout<<tmp<<endl;
			cout<<((n*m)/2)+tmp<<endl;
		}
		else{
			int aux=(n/2);
			int aux2=(m/2);
			if(n%2==1)aux++;
			if(m%2==1)aux2++;
			cout<<aux*aux2<<endl;
		}
		
	}
	return 0;
}
