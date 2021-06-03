#include<bits/stdc++.h>
using namespace std;
vector<int>cd;
int memo[1005];
int use[1005];
int k,n,mayor;
string nums;
string conv(int num){
	string aux;
	while(num>0){
		aux+=num%10+'0';
		num/=10;
	}
	string cad;
	for(int i=aux.length()-1;i>=0;i--){
		cad+=aux[i];
	}
	return cad;
}
void dp(int sum,string tmp,int pos){
	if(sum>mayor){
		mayor=sum;
		nums=tmp;
	}
	for(auto x:cd){
		if(memo[x]==0 && sum+x<=k){
			if(use[x]==0 || pos<use[x]){
				memo[x]=1;
				use[x]=pos;
				string aux=conv(x);
				dp(sum+x,tmp+aux+" ",pos+1);
				memo[x]=0;	
			}
		}
	}
}
int main(){
	while(scanf("%d",&k)!=EOF){
	    for(int i=0;i<=1000;i++){
	    	use[i]=0;
		}
		mayor=0;
		cd.clear();
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			int aux;
			scanf("%d",&aux);
			cd.push_back(aux);
		}
		dp(0,"",0);
		cout<<nums<<"sum:"<<mayor<<endl;
	}
	return 0;
}
