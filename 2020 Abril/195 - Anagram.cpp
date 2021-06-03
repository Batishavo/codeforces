#include<bits/stdc++.h>
using namespace std;
map<string,int>memo;
map<string,int>memo2;
int use[100];
void dp(int lon,string cad,string cad2){
	//cout<<cad<<endl;
	if(cad.length()==lon){
		if(memo2[cad]==0){
		//	cout<<"___________"<<endl;
			cout<<cad<<endl;
			memo[cad]=1;
			//return;
		}
		return;
	}
	for(int i=0;i<lon;i++){
		if(use[i]==0 && memo[cad+cad2[i]]==0){
			use[i]=1;
			memo[cad+cad2[i]]=1;
			dp(lon,cad+cad2[i],cad2);
			use[i]=0;
		}
	}
}
bool can(char a,char b){
	if((a>='a' && a<='z' && b>='a' && b<='z') ||
	   (a>='A' && a<='Z' && b>='A' && b<='Z') ){
		return a<b;
	}
	else{
		char tmp1=tolower(a);
		char tmp2=tolower(b);
		if(tmp1==tmp2){
			return a<b;
		}
		else{
			return tmp1<tmp2;	
		}
	}
	
}
int main(){
	int q;
	scanf("%d",&q);
	while(q--){
		memo.clear();
		memo2.clear();
		string cad;		
		cin>>cad;
		sort(cad.begin(),cad.end(),can);
		dp(cad.length(),"",cad);
	}
	return 0;
}
