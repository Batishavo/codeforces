#include<bits/stdc++.h>
using namespace std;
const int lim=20e5;
int memo[lim];
int n,m;
vector<int>myNums;
int select(int a,int emp ,int flag){
	cout<<"--"<<a<<endl;
	if(a<=0 || a>n ||(a>emp && flag==1)||(a<emp && flag==0)|| a==-1) {
		return -1;
	}
	if(memo[a]==0){
		return a;
	}
	return select(memo[a],emp,flag);
}
int main(){
	while(true){
		scanf("%d %d",&n,&m);
		if(n==0 && m==0){
			break;
		}
		while(m--){
			myNums.clear();
			int a,b;
			scanf("%d %d",&a,&b);
			int p1=select(a-1,a-1,1);
			cout<<"____"<<endl;
			int p2=select(b+1,b+1,0);
			
			memo[b]=p1;
			memo[a]=p2;

			for(int i=1;i<=n;i++){
				printf("%d ",memo[i]);
			}
			printf("\n");
			if(p1>=1 && p1<=n){
				cout<<p1<<" ";
			}
			else{
				cout<<"*"<<" ";
			}
			/////////////////////
			if(p2>=1 && p2<=n){
				cout<<p2<<endl;;
			}
			else{
				cout<<"*"<<endl;
			}
		}
		cout<<"-"<<endl;
		for(int x=1;x<=n;x++){
			memo[x]=0;
		}
	}
	
	return 0;
}
