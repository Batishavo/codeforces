#include<bits/stdc++.h>
using namespace std;
const int lim=1e6;
int k,m;
int uses[30];
vector<int>songs;
string conversor(int n){
	string aux="";
	string tmp="";
	while(n>0){
		aux+=(n%10)+'0';
		n/=10;
	}
	for(int i=aux.length()-1;i>=0;i--){
		tmp+=aux[i];
	}
	return tmp;
}
pair<int,string> dp(int time){
	int flag=0;
	int tmp=-lim;
	string cad="";
	for(auto x:songs){
		if(uses[x]==0 && time-x>=0){
			flag=1;
			uses[x]=1;
			cad=conversor(x);
			pair<int>aux=dp(time-x)+cad;
			tmp=max(tmp,aux.first);
			uses[x]=0;
		}
	}
	if(flag==0){
		pair<int , string > result({k-time,""});		
		return result;
	}
	pair<int , string > result({tmp,""});
	return result;
}
int main(){
	while(scanf("%d",&k)!=EOF){
		for(int i=0;i<25;i++){
			uses[i]=0;
		}
		songs.clear();
		scanf("%d",&m);
		for(int i=0;i<m;i++){
			int tmp;
			scanf("%d",&tmp);
			songs.push_back(tmp);
		}
		pair<int , string> result=dp(k,"");
		cout<<result.second;
		printf("sum:%d\n",result.first);
		
	}

	return 0;
}
