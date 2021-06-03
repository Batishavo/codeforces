#include<bits/stdc++.h>
using namespace std;
int main(){
	string cad;
	while(true){
	//	cin.ignore();
		getline(cin, cad);
		if(cad=="DONE"){
			break;
		}
		string cad1="";
		string cad2="";
		for(int i=0;i<cad.length();i++){
			if((cad[i]>='a'&& cad[i]<='z')||(cad[i]>='A'&& cad[i]<='Z')){
				char c=cad[i];
    			cad1+=tolower(c);
			}
		}		
		for(int i=cad1.length()-1;i>=0;i--){
			cad2+=cad1[i];
		}
	//	cout<<cad<<" "<<cad1<<" "<<cad2<<endl;
		if(cad1==cad2){
			cout<<"You won't be eaten!"<<endl;
		}
		else{
			cout<<"Uh oh.."<<endl;
		}
	}
//	cout<<endl;
	//cout<<"___";
	return 0;
}
