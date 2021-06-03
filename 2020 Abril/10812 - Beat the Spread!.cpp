#include<bits/stdc++.h>
using namespace std;
int main(){
	int q;
	scanf("%d",&q);
	while(q--){
		int n,m;
		scanf("%d %d",&n,&m);
		if(n>=m && (n-m)%2==0){
			int tmp=(n-m)/2;
			cout<<tmp+m<<" "<<tmp<<endl;
		}	
		else{
			cout<<"impossible"<<endl;
		}
	}
	return 0;
}
