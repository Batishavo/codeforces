#include<iostream>
#include<string>
using namespace std;
int main(){
	int test;
	scanf("%d",&test);
	while(test--){
		string a,b,c;
		cin>>a>>b>>c;
		int flag=0;
		for(int i=0;i<a.size();i++){
			if(c[i]!=a[i] && c[i]!=b[i]){
				flag=1;
				break;
			}
		}
		printf((flag==0)?"YES\n":"NO\n");
	}
	return 0;
}
