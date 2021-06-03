#include<bits/stdc++.h>
using namespace std;
const int lim=1e6;
string mat[lim+10];
string n;
int mayor=0;
void dp(int pos){
	mayor=max(mayor,n[pos]-'0');
//	cout<<mayor<<endl;
	if(pos>=n.length()){
		return;
	}
	for(int i=0;i<n[pos]-'0';i++){
		mat[i]+='1';
	}
	for(int i=n[pos]-'0';i<mayor;i++){
		mat[i]+='0';
	}
	dp(pos+1);
}
int main(){
	cin>>n;
	dp(0);
	cout<<mayor<<endl;
	for(int i=0;i<mayor;i++){
		cout<<mat[i]<<" ";
	}
	return 0;
}
