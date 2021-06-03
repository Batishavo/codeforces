#include<bits/stdc++.h>
using namespace std;
string words[200];
string reverseWord[200];
string wordsP2[200];
int use[200],pos=0;
string cad1;
int main(){
	int n,m,cont=0;
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++){
		cin>>words[i];
		string tmp=words[i];
		reverse(tmp.begin(),tmp.end());
		reverseWord[i]=tmp;
	}
	for(int i=0;i<n;i++){
		if(use[i]==0){
			for(int j=0;j<n;j++){
				if(i==j)continue;
				if(words[i]==reverseWord[j] && use[j]==0){
					use[i]=1;
					use[j]=1;
					cad1+=words[i];
					wordsP2[pos++]=words[j];
					cont+=m*2;
				}
			}	
		}
	}
	for(int i=0;i<n;i++){
		if(use[i]==0 && words[i]==reverseWord[i]){
			cad1+=words[i];
			cont+=m;
			break;
		}
	}
	cout<<cont<<endl<<cad1;
	for(int i=pos-1;i>=0;i--){
		cout<<wordsP2[i];
	}
	return 0;
}
