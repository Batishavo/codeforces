#include<iostream>
using namespace std;
string str_sequence;
int n;
bool div(int num){
	int aux=0;
	for(int i=0;i<n;i++){
		aux+=str_sequence[i]-'0';
		if(aux==num){
			aux=0;
		}
		else if(aux>num){
			return false;
		}
	}
	//cout<<num<<endl;
	if(aux==0){
		return true;
	}
	return false;
}
bool can(){
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=str_sequence[i]-'0';
	}
	if(sum==0 && n%2==0){
		return true;
	}
	for(int i=1;i<=sum/2;i++){
		if(sum%i==0 && div(i)){
			return true;
		}
	}
	return false;
}
int main(){
	cin>>n>>str_sequence;
	if(can()){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
	return 0;
}
