#include<iostream>
using namespace std;
int n,m;
string cad;
int main(){
	cin>>n>>m>>cad;
	if(n==1 && m>0){
		cout<<'0'<<endl;
		return 0;
	}
	for(int i=0;i<n;i++){
		if(m==0){
			break;
		}
		if(i==0 && cad[i]!='1'){
			m--;
			cad[i]='1';
		}
		if(i>0 && cad[i]!='0'){
			cad[i]='0';
			m--;
		}
	}
	cout<<cad<<endl;
	return 0;
}
