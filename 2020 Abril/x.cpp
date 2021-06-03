#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	int cont=1;
	while(n--){
		for(int i=0;i<52;i++){
			string cad;
			cin>>cad;
			if(i==32){
				cout<<"Case "<<(cont++)<<": "<<cad<<endl;
			}
		}
	}
}
