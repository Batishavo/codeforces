#include<bits/stdc++.h>
using namespace std;
int n;
string cad;
int main(){
	int q;
	scanf("%d",&q);
	while(q--){
		cin>>n>>cad;
		string cad1,cad2;
		int flag=0,ini=0;
		if(cad[0]=='1'){
			cad1+='2';
			cad2+='2';
			ini=1;
		}
		for(int i=ini;i<n;i++){
			if(cad[i]=='0'){
				cad1+='0';
				cad2+='0';
			}			
			else if(cad[i]=='2'){
				cad1+='1';
				cad2+='1';
			}		
			else{
				if(flag==0){
					flag=1;
					cad1+='1';
					cad2+='0';
				}
				else{
					flag=0;
					cad1+='0';
					cad2+='1';
				}
			}
		}
		//cout<<"______"<<endl;
		cout<<cad1<<endl<<cad2<<endl;
		//cout<<"______"<<endl;
	}
	return 0;
}
