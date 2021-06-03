#include<bits/stdc++.h>
using namespace std;
char mat[15][15];
int memo[15][15];
void expandI(int inicio,int final,int paso,int j){
	for(int x=inicio;x!=final;x+=paso){
		//cout<<x<<endl;
		memo[x][j]=1;
		if(mat[x][j]!='.'){
			break;
		}
	}	
}
void expandJ(int inicio,int final,int paso,int I){
	for(int x=inicio;x!=final;x+=paso){
		memo[I][x]=1;
		if(mat[I][x]!='.'){
			break;
		}
	}	
}
void alfilExpand(int i,int j,int sumI,int sumJ){
	while(i>=0 && i<8 && j>=0 && j<8 && mat[i][j]=='.'){
		memo[i][j]=1;
		i+=sumI;
		j+=sumJ;
	}	
	memo[i][j]=1;
}
void rook(int i,int j){
	expandI(i+1, 8, 1,j);
	expandI(i-1,-1,-1,j);
	expandJ(j+1, 8, 1,i);
	expandJ(j-1,-1,-1,i);
}
void horse(int i,int j){
	int jumpsI[10]={2, 2,-2,-2, 1,-1, 1,-1};
	int jumpsJ[10]={1,-1, 1,-1, 2, 2,-2,-2};
	for(int x=0;x<8;x++){
		int posI=i+jumpsI[x];
		int posJ=j+jumpsJ[x];
		if(posI>=0 && posI<8 && posJ>=0 && posJ<8 ){ 
			memo[posI][posJ]=1;
		}
	}
	
}
void alfil(int i,int j){
	alfilExpand(i+1,j+1, 1, 1);
	alfilExpand(i+1,j-1, 1,-1);
	alfilExpand(i-1,j+1,-1, 1);
	alfilExpand(i-1,j-1,-1,-1);
}
void quen(int i,int j){
	alfilExpand(i+1,j+1, 1, 1);
	alfilExpand(i+1,j-1, 1,-1);
	alfilExpand(i-1,j+1,-1, 1);
	alfilExpand(i-1,j-1,-1,-1);
	expandI(i+1, 8, 1,j);
	expandI(i-1,-1,-1,j);
	expandJ(j+1, 8, 1,i);
	expandJ(j-1,-1,-1,i);
}
void king(int i,int j){
	int arrI[10]={ 1, 1, 1, 0, 0,-1,-1,-1};
	int arrJ[10]={ 1, 0,-1, 1,-1, 0, 1,-1};
	for(int x=0;x<8;x++){
		int posI=i+arrI[x];
		int posJ=j+arrJ[x];
		if(posI>=0 && posI<8 && posJ>=0 && posJ<8 ){
			memo[posI][posJ]=1;
		}
	}
	
}
void peon(int i,int j){
	int whiteI[5]={-1,-1};
	int whiteJ[5]={ 1,-1};
	int blackI[5]={ 1, 1};
	int blackJ[5]={ 1,-1};
	if(mat[i][j]>='a' && mat[i][j]<='z'){
		for(int x=0;x<2; x++){
			int posI=i+blackI[x];
			int posJ=j+blackJ[x];
			if(posI>=0 && posI<8 && posJ>=0 && posJ<8){
				memo[posI][posJ]=1;
			}
		}
	}
	else{
		for(int x=0;x<2; x++){
			int posI=i+whiteI[x];
			int posJ=j+whiteJ[x];
			if(posI>=0 && posI<8 && posJ>=0 && posJ<8){
				memo[posI][posJ]=1;
			}
		}
	}
	
}
void exploid(){
	for(int i=0;i<8;i++){
		for(int j=0;j<8;j++){
			if(mat[i][j]=='r'||mat[i][j]=='R'){
				rook(i,j);
			}
			if(mat[i][j]=='n' ||mat[i][j]=='N'){
				horse(i,j);
			}
			if(mat[i][j]=='b' || mat[i][j]=='B'){
				alfil(i,j);
			}
			if(mat[i][j]=='q'||mat[i][j]=='Q'){
				quen(i,j);
			}
			if(mat[i][j]=='k'|| mat[i][j]=='K'){
				king(i,j);
			}
			if(mat[i][j]=='p'|| mat[i][j]=='P'){
				peon(i,j);
			}
		}
	}
	
}
int main(){
	string cad;
	int pos_x=0,pos_y=0;
	char tmp[100];
	while((scanf("%s",tmp))!=EOF){
		pos_x=0;
		pos_y=0;
		cad="";
		int x=strlen(tmp);
		for(int i=0;i<x;i++){
			cad+=tmp[i];
		}
		for(int i=0;i<8;i++){
			for(int j=0;j<8;j++){
				mat[i][j]='.';
				memo[i][j]=0;
			}
		}
		for(int i=0;i<cad.length();i++){
			if(cad[i]>='0' && cad[i]<='9'){
				pos_x+=cad[i]-'0';
			}
			else if(cad[i]=='/'){
				pos_x=0;
				pos_y++;
			}
			else{
				mat[pos_y][pos_x]=cad[i];
				pos_x++;
			}
		}
		int cont=0;
		exploid();
		//cout<<cad<<endl;
		for(int i=0;i<8;i++){
			for(int j=0;j<8;j++){
			//	cout<<mat[i][j];
				if(memo[i][j]==0 && mat[i][j]=='.'){
					cont++;
				}
			}
			//cout<<endl;
		}
		
		cout<<cont<<endl;
	}
	return 0;
}
