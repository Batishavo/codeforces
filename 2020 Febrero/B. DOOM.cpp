#include<cstdio>
#include<utility>
using namespace std;
const int lim=2e4+10;
struct nodo{
	pair<int,int>val;
	nodo* next;
	nodo(pair<int,int>x){
		val=x;
		next=NULL;
	}
};
struct queue{
	nodo* head;
	nodo* tail;
	queue(){
		head=NULL;
		tail=NULL;
	}
	void push(pair<int,int>val){
		nodo* nd=new nodo(val);
		if(head==NULL){
			head=nd;
		}
		if(tail!=NULL){
			tail->next=nd;
		}
		tail=nd;
		
	}
	void pop(){
		nodo* tmp=tail;
		tail=tail->next;
		if(tail==NULL){
			head=NULL;
		}
		delete tmp;
	}
	pair<int,int> front(){
		return tail->val;	
	}
};
char mat[lim][lim];
int memo[lim][lim];
int main(){
	queue cola;
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf(" %c",&mat[i][j]);
		}
	}
	int iniI,iniJ;
	scanf("%d %d",&iniI,&iniJ);
	int arri[5]={1,0,-1,0};
	int arrj[5]={0,1,0,-1};
	cola.push({iniI,iniJ});
	for(int x=0;x<4;x++){
		pair<int,int>act=cola.front();
		cola.pop();
		int i=act.first+arri[x];
		int j=act.second+arrj[x];
		int cont=memo[act.first][act.second]+1;
		if(mat[i][j]=='S'){
			printf("%d\n",cont);
			return 0;
		}
		if(i>=0 && i<n && j>=0 && j<m && mat[i][j]!='#'&&mat[i][j]!='D'){
			cola.push({i,j});
			memo[i][j]=cont;
		}
	}
	return 0;
}
