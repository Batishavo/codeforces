#include<iostream>
using namespace std;
int bucket[400];
void clear(){
	for(int i=0;i<380;i++){
		bucket[i]=0;
	}
	
}
bool can(string s,string t){
	for(int i=0;i<s.length();i++){
		bucket[s[i]]=1;
	}
	for(int i=0;i<t.length();i++){
		if(bucket[t[i]]==1){
			return true;
		}
	}
	return false;
}
int main(){
	int test;
	cin>>test;
	while(test--){
		clear();
		string s,t;
		cin>>s>>t;
		if(can(s,t)){
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}
		
	}
	return 0;
}
