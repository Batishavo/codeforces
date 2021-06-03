#include<bits/stdc++.h>
using namespace std;
int main(){
	int q,cont=1;
	string cad;
	string tmp="";
	scanf("%d",&q);
	cin.ignore();
	while(q--){
		tmp="";
		getline(cin,cad);
		for(int i=0;i<cad.length();i++){
			if(cad[i]>='a' && cad[i]<='z'){
				tmp+=cad[i];
			}	
		}
		int cadLong=tmp.length();
		int sqrCad=sqrt(cadLong);
		//cout<<cadLong<<" "<<sqrCad<<endl;
		if(sqrCad*sqrCad==cadLong){
			string cad1="",cad2="",cad3="",cad4="";
			for(int i=0;i<sqrCad;i++){
				cad1+=tmp[i];
			}
			for(int i=cadLong-1;i>=cadLong-sqrCad;i--){
				cad2+=tmp[i];
			}		
			for(int i=0;i<cadLong;i+=sqrCad){
				cad3+=tmp[i];
			}
			for(int i=cadLong-1;i>=0;i-=sqrCad){
				cad4+=tmp[i];
			}
		//	cout<<cad1<<" 1"<<cad2<<" 2"<<cad3<<" 3"<<cad4<<endl;
			if(cad1==cad2 && cad3==cad4 && cad1==cad3){
				cout<<"Case #"<<cont++<<":"<<endl;
				cout<<sqrCad<<endl;
				continue;
			}
		}
		cout<<"Case #"<<cont++<<":"<<endl;
		cout<<"No magic :("<<endl;
	}
	
	return 0;
}
