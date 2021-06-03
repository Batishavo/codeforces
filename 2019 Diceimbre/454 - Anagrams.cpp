#include<bits/stdc++.h>
using namespace std;
int main(){
	int q;
	string cad;
	vector<string> myStrings;
	vector<string>orderString;
	cin>>q;
	cin.ignore();
    cin.ignore();
	while(q--){
		myStrings.clear();
		orderString.clear();
		while(true){
			getline(cin, cad);
			if(cad==""){
				break;
			}
			myStrings.push_back(cad);
		}
		sort(myStrings.begin(),myStrings.end());
		for(auto x:myStrings){
			string aux=x;
			sort(aux.begin(),aux.end());
			string tmp="";
			for(int i=0;i<x.length();i++){
				if(aux[i]!=' '){
					tmp+=aux[i];
				}
				
			}
			orderString.push_back(tmp);
		}
		int vectoLong=myStrings.size();
		for(int i=0;i<vectoLong;i++){
			//cout<<myStrings[i]<<" "<<orderString[i]<<endl;
			for(int j=i+1;j<vectoLong;j++){
				if(orderString[i]==orderString[j]){
					cout<<myStrings[i]<<" = "<<myStrings[j]<<endl;
				}
			}
		}
		if(q)
			cout<<endl;
	}
	return 0;
}
