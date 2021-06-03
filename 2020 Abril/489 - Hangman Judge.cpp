#include<bits/stdc++.h>
using namespace std;
char mat[200];
char use[200];
void clean(){
	for(int i='a';i<='z';i++){
		mat[i]=0;
		use[i]=0;
	}
}
int main(){
	int n;
	while(true){
		scanf("%d",&n);
		if(n==-1){
			break;
		}
		clean();
		string cad1,cad2;
		cin>>cad1>>cad2;
		int ac=0;
		int wa=0,flag=1;
		for(int i=0;i<cad1.length();i++){
			if(mat[cad1[i]]==0){
				ac++;
				mat[cad1[i]]=1;
			}
		}
		for(int i=0;i<cad2.length();i++){
			if(mat[cad2[i]]==1){
				if(use[cad2[i]]==0){
					ac--;
					use[cad2[i]]=1;
					if(ac==0 && wa<7){
						flag=0;
					}
				}
			}
			else{
				if(use[cad2[i]]==0){
					use[cad2[i]]=1;
					wa++;	
				}
			}
		}
		if(flag==0){
			cout<<"Round "<<n<<endl;
			cout<<"You win."<<endl;
		}
		else if(wa>=7){
			cout<<"Round "<<n<<endl;
			cout<<"You lose."<<endl;

		}
		else{
			cout<<"Round "<<n<<endl;
			cout<<"You chickened out."<<endl;
		}
	}
	
	return 0;
}
