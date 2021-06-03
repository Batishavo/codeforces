#include<bits/stdc++.h>
using namespace std;
int main(){
	int q;
	scanf("%d",&q);
	while(q--){
		int n,a,b,c,d;
		scanf("%d %d %d %d %d",&n,&a,&b,&c,&d);	
		if(((a-b)*n)<=c+d && ((a+b)*n)>=c-d){
			cout<<"Yes"<<endl;
		}
		else{
			cout<<"No"<<endl;	
		}
	}
	return 0;
}
