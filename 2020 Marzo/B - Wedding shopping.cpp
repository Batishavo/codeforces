#include<bits/stdc++.h>
using namespace std;
const int lim=1e6;
vector<int> clothes[30];
int use[30][400];
int k,m;
int dp(int pos,int money){
	if(money<0){
		return -lim;
	}
	if(pos>=m){
		return k-money;
	}
	int tmp=-lim;
	if(use[pos][money]!=-1){
		return use[pos][money];
	}
	for(auto x:clothes[pos]){
		tmp=max(tmp,dp(pos+1,money-x));
	}
	use[pos][money]=tmp;
	return tmp;
}
void clean(){
	for(int i=0;i<25;i++){
		for(int j=0;j<250;j++){
			use[i][j]=-1;
		}
		clothes[i].clear();
	}
}
int main(){
	int querys;
	scanf("%d",&querys);
	while(querys--){
		clean();
		scanf("%d %d",&k,&m);
		for(int i=0;i<m;i++){
			int cant;
			scanf("%d",&cant);
			for(int j=0;j<cant;j++){
				int clotes;
				scanf("%d",&clotes);
				clothes[i].push_back(clotes);
			}
		}
		int answer=dp(0,k);
		if(answer<=0){
			printf("no solution\n");
		}
		else{
			printf("%d\n",answer);
		}
	}
	
	return 0;
}
