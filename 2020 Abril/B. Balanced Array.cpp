#include<bits/stdc++.h>
using namespace std;
int main(){
	int q;
	scanf("%d",&q);
	while(q--){
		int n;
		scanf("%d",&n);
		if(n%4==0){	
			printf("YES\n");
			string cad1="";
			string cad2="";
			for(int i=1;i<=n;i+=4){
				cad1+=i+3+'0';
				cad1+=" ";
				cad1+=i+'0';
				cad1+=" ";
				//////////////
				cad2+=i+1+'0';
				cad2+=" ";
				cad2+=i+2+'0';
				cad2+=" ";
			}
			cout<<cad1<<cad2<<endl;
		}	
		else{
			printf("NO\n");
		}
	}
	return 0;
}
