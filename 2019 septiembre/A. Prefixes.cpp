#include<cstdio>
#include<iostream>
using namespace std;
int n,cont;
string cad;
int main(){
	cin>>n>>cad;
	for(int i=0;i<n;i+=2){
		if(cad[i]==cad[i+1]){
			cont++;
			if(cad[i]=='a')
				cad[i]='b';
			else
				cad[i]='a';
		}
	}
	cout<<cont<<endl<<cad<<endl;
	return 0;
}
