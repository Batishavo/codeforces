#include<iostream>
#include<string>
using namespace std;
int n;
bool can(string cad){
	for(int i=0;i<cad.length();i++){
		if(cad[i]=='8' && cad.length()-i>=11){
			return true;
		}
	}
	
	return false;
}
int main(){
	cin>>n;
	while(n--){
		string cad;
		int cosa;
		cin>>cosa>>cad;
		if(can(cad)){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
