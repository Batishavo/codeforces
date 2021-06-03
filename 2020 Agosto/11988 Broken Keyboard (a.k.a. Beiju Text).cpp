#include<bits/stdc++.h>
using namespace std;
stack<string>cads;
char cad[100000];
int main(){
	while(scanf("%s",cad)!=EOF){
		string fin="";
		int lon=strlen(cad);
		cads.push("");
		for(int i=0;i<lon;i++){
			if(cad[i]=='['){
				cads.push("");
			}
			else if(cad[i]==']'){
				fin+=cads.top();
				cads.pop();
			}	
			else{
				cads.top()+=cad[i];
			}
		}
		while(!cads.empty()){
			fin+=cads.top();
			cads.pop();
		}
		cout<<fin<<endl;
	}
	return 0;
}
