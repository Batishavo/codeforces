#include<iostream>
#include<string>
using namespace std;
bool can(string original,string evaluar){
	int pos=0;
	for(int i=0;i<evaluar.length();i++){
		if(pos<original.length()){
			if(original[pos]==evaluar[i]){
				pos++;
			}
			if(evaluar[i]!=original[pos-1]){
				return false;
			}
		}
		else if(evaluar[i]!=original[pos-1]){
			return false;
		}
	}
	if(pos==original.length())
		return true;
	return false;
}
int main(){
	int n;
	cin>>n;
	while(n--){
		string original,evaluar;
		cin>>original>>evaluar;
		if(can(original,evaluar)){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
