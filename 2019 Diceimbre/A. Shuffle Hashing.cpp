#include<iostream>
using namespace std;
int memo[200];
int memoPasword[200];
void clearP(){
	for(int i='a';i<='z';i++){
		memoPasword[i]=0;
	}
}
bool dif(string aux){
	clearP();
	for(int i=0;i<aux.length();i++){
		memoPasword[aux[i]]++;
	//	cout<<"___"<<aux[i];
	}	
//	cout<<endl;
	for(int i='a';i<='z';i++){
		if(memo[i]!=memoPasword[i]){
	//		cout<<(char)i<<" "<<memoPasword[i]<<" "<<memo[i]<<endl;
			return false;
		}
	}
	return true;
}

void clear(){
	for(int i='a';i<='z';i++){
		memo[i]=0;
	}
}
bool can(string cad,string pasword){
	clear();
	for(int i=0;i<cad.length();i++){
		memo[cad[i]]++;
	}
	if(pasword.length()<cad.length()){
		return false;
	}
	for(int i=0;i<pasword.length()-cad.length()+1;i++){
		int m=cad.length();
		string aux=pasword.substr(i, m);
		if(dif(aux)){
			
			return true;
		}
	//	cout<<aux<<endl;
	}
	return false;
}

int main(){
	int q;
	cin>>q;
	while(q--){
		string cad,pasword;
		cin>>cad>>pasword;
		//cout<<endl;
		if(can(cad,pasword)){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
		
	}
	
	return 0;
}
