#include<bits/stdc++.h>
using namespace std;
int dontUse[200];
int use[200];
void clear(){
	for(int i='A';i<='Z';i++){
		dontUse[i]=0;
		use[i]=0;
	}
}
int main(){
	int q;
	scanf("%d",&q);
	while(q--){
		clear();
		string leters1,leters2,posision;
		for(int i=0;i<3;i++){
			cin>>leters1>>leters2>>posision;
			if(posision=="even"){
				string cad=leters1+leters2;
				for(int j=0;j<cad.length();j++){
					dontUse[cad[j]]=1;
				}
			}
			else if(posision=="up"){
				for(int j=0;j<leters1.length();j++){
					use[leters1[j]]++;
				}
				for(int j=0;j<leters2.length();j++){
					use[leters2[j]]--;
				}
			}
			else{
				for(int j=0;j<leters1.length();j++){
					use[leters1[j]]--;
				}
				for(int j=0;j<leters2.length();j++){
					use[leters2[j]]++;
				}
			}
		}
		char word='A';
		int cant=0;
		for(int i='A';i<='L';i++){
			if(dontUse[i]==0 ){
			//	cout<<use[i]<<" "<<(char)i<<endl;
				if(abs(use[i])>cant){
					word=i;
					cant=abs(use[i]);
				}
			}
		}
		cout<<word<<" is the counterfeit coin and it is ";
		if(use[word]>0){
			cout<<"heavy."<<endl;
		}
		else{
			cout<<"light."<<endl;
		}
	}
	
	
	return 0;
}
