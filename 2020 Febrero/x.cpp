#include<cstdio>
#include<utility>
using namespace std;
const int lim=2e3+10;
const int lim2=2e3+10;
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
		if(tail!=NULL){
			tail->next=nd;
		}
		tail=nd;
		if(head==NULL){
			head=nd;
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
		return head->val;	
	}
	bool isEmpty(){
		return head==NULL;
	}
};
char mat[lim][lim2];
int memo[lim][lim2];
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
	while(!cola.isEmpty()){
		pair<int,int>act=cola.front();
		cola.pop();
		int cont=memo[act.first][act.second]+1;
	/*	printf("__________\n");
		for(int y=0;y<n;y++){
			for(int z=0;z<m;z++){
				printf("%d",memo[y][z]);
			}
			printf("\n");
		}*/
		for(int x=0;x<4;x++){
			int i=act.first+arri[x];
			int j=act.second+arrj[x];	
			if(i>=0 && i<n && j>=0 && j<m && mat[i][j]!='#'&&mat[i][j]!='D'&& memo[i][j]==0){
				cola.push({i,j});
				memo[i][j]=cont;
				if(mat[i][j]=='S'){
					printf("%d\n",cont);
					return 0;	
				}
			}
		}	
	}
	return 0;
}
