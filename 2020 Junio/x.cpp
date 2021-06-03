#include<bits/stdc++.h>
using namespace std;
int memo[200];
void cads(string cad,int n){
	if(cad.length()==n){
		cout<<cad<<endl;
		return;
	}
	for(int i='a';i<='z';i++){
		if(memo[i]>0){
			char tmp=i;
			memo[i]--;
			cads(cad+tmp,n);	
			memo[i]++;
		}
	}
}
int main(){
	string m;
	cin>>m;
	for(int i=0;i<m.length();i++){
		memo[m[i]]++;
	}
	//printf("%d %d %d\n",memo['a'],memo['b'],memo['c']);
	cads("",m.length());
	return 0;
}
