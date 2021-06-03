#include<cstdio>
#include<iostream>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int bucket[200]={0},menor='z',mayor='a';
		string cad;
		cin>>cad;
		for(int i=0;i<cad.length();i++){
			bucket[cad[i]]++;
			menor=(cad[i]<menor)?cad[i]:menor;
			mayor=(cad[i]>mayor)?cad[i]:mayor;
		}	
		int flag=1;
		for(int i=menor;i<=mayor;i++){
			if(bucket[i]!=1){
				flag=0;
				break;
			}
		}
		if(flag){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
