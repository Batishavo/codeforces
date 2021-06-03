#include<bits/stdc++.h>
using namespace std;
double mat[500];
void clean(){
	for(int i=0;i<500;i++){
		mat[i]=0;
	}
}
int main(){
	int q;
	scanf("%d",&q);
	while(q--){
		clean();
		int word,leter;
		double cont=0;
		scanf("%d",&word);
		for(int i=0;i<word;i++){
			//printf("%d %d\n",word,i);
			double value;
			char ith;
			cin>>ith>>value;
			mat[ith]=value;
		} 
		scanf("%d\n",&leter);
		while(leter--){
			string cad;
			getline(cin,cad);
		//	cout<<"__________"<<endl;
			for(int i=0;i<cad.length();i++){
				cont+=mat[cad[i]];
			}	
		}
		//cout<<cont/100<<"."<<tmp<<"$"<<endl;
		printf("%0.2lf$\n",cont/100);
	}	
	return 0;
}
