#include<bits/stdc++.h>
using namespace std;
int main(){
	int q;
	scanf("%d",&q);
	while(q--){
		int n;
		string cad;
		cin>>n>>cad;
		string a(n,'0'),b(n,'0');
		for(int i=0;i<n;i++){
			if(cad[i]=='1'){
				a[i]='1';
				b[i]='0';
				for(int j=i+1;j<n;j++){
					b[j]=cad[j];
				}
				break;
			}
			else if(cad[i]=='2'){
				a[i]='1';
				b[i]='1';
			}
			else{
				a[i]='0';
				b[i]='0';
			}
		}
		cout<<a<<endl<<b<<endl;
	}
	return 0;
}
