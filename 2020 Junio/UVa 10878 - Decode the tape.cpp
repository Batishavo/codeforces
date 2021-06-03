#include<bits/stdc++.h>
using namespace std;
int main(){
	string cad;
	getline(cin, cad);
	string word="";
	while(true){
		getline(cin, cad);
		if(cad=="___________"){
			break;
		}
		int pot=1;
		int total=0;
		//int ll=cad.length();
		for(int i=9;i>=2;i--){
			if(cad[i]=='o'){
				total+=pot;
			}
			if(cad[i]=='.'){
				continue;
			}
			pot*=2;
		}
		word+=(char)total;
	}
	cout<<word;
	return 0;
}
