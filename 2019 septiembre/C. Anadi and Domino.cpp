#include<iostream>
#include<vector>
using namespace std;
int n,m,maximo;
vector <int> g1[100];
int memo[50][50];
int mark[50][50];
void dp(int act,int pos,int ini){
	maximo=(maximo>pos)?maximo:pos;
	if(act==ini){
		maximo=(maximo>pos+1)?maximo:pos+1;
	}
	//cout<<act<<" "<<pos<<endl;
	for(int x:g1[act]){
		if(memo[act][x]==0 && memo[x][act]==0 ){
			memo[act][x]=1;
			memo[x][act]=1;
			printf("%d %d XXXXXXXXXXX%d\n",act,x,pos);
			dp(x,pos+1,ini);
			memo[act][x]=0;
			memo[x][act]=0;
		}
	}	
}
int main(){
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int aux1,aux2;
		cin>>aux1>>aux2;
		g1[aux1].push_back(aux2);
		g1[aux2].push_back(aux1);
	}
	cout<<"_________"<<endl;
	for(int i=0;i<n;i++){
		for(int x:g1[i]){
			memo[i][x]=1;
			memo[x][i]=1;
			printf("%d %d\n",i,x);
			dp(x,1,i);
			memo[i][x]=0;
			memo[x][i]=0;
			cout<<"_________"<<endl;
		}		
	}
	cout<<maximo<<endl;
	return 0;
}
