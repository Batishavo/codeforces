#include<cstdio>
#include<utility>
using namespace std;
struct nodo{
	pair<int,int> valor;
	nodo* next;
	
	nodo(pair<int,int> x){
		valor=x;
		next=NULL;
	}
};
struct stack{
	nodo* head;
	nodo* tail;
	stack(){
		head=NULL;
		tail=NULL;
	}
	void push(pair<int,int> val){
		nodo* tmp=new nodo(val);
		if(tail!=NULL){
			tail->next=tmp;
		}
		
		tail=tmp;
		if(head==NULL){
			head=tmp;
		}
		
	}
	void pop(){
		nodo* tmp=head;
		head=head->next;
		if(head==NULL){
			tail=NULL;
		}
		delete tmp;
	}
	pair<int,int> front(){
		return head->valor;
	}
	bool isEmpty(){
		return head==NULL;
	}
};
int mat[100][100];
int mark[100][100];
int main(){
	stack pila;
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&mat[i][j]);
		}
	}
	int iniI,iniJ,finI,finJ;
	scanf("%d %d %d %d",&iniI,&iniJ,&finI,&finJ);
	pair<int,int>aux(iniI,iniJ);
	pila.push(aux);
	int arri[5]={0,1,0,-1};
	int arrj[5]={1,0,-1,0};
	while(!pila.isEmpty()){
		pair<int,int>act=pila.front();
		pila.pop();
		int cont=mark[act.first][act.second];
		for(int x=0;x<4;x++){
			int i=act.first+arri[x];
			int j=act.second+arrj[x];
			pair<int,int>tmp(i,j);
			if(i>=0 && i<n && j>=0 && j<m&& mat[i][j]==0 && mark[i][j]==0){
				//printf("%d %d\n",i,j);
				mark[i][j]=cont+1;
				pila.push(tmp);

			}
				
		}
	}

	printf("%d\n",mark[finI][finJ]+1);
	return 0;
}


