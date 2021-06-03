#include<cstdio>
#include<utility>
#include<vector>
using namespace std;
typedef pair<int,int> p;
const int lim=1e4;
struct nodo{
	nodo* ant;
	p pos ;
	nodo(){
		ant=NULL;
		pos={0,0};
	}
	nodo(p aux){
		ant=NULL;
		pos=aux;
	}
};
struct queve{
	nodo* head; 
	nodo* tail;
	queve(){
		head=NULL;
		tail=NULL;
	}
	p front(){
		return head->pos;
	}
	bool IsEmpty(){
		return head==NULL;
	}
	void push(p num){
		nodo* nd=new nodo(num);
		if(tail!=NULL){
			head->ant=nd;
		}
		tail=nd;
		if(head==NULL){
			head=nd;
		}
	}
	void pop(){
		nodo* tmp=head;
		head=head->ant;
		if(head==NULL){
			tail=NULL;
		}
		delete tmp;
	}
};
int n,m;
int pos_i[5]={1,0,-1,0};
int pos_j[5]={0,1,0,-1};
char mat[lim+5][lim+5];
int memo[lim+5][lim+5];
int main(){
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf(" %c",&mat[i][j]);
		}
	}
	int pos1,pos2;
	scanf("%d %d",&pos1,&pos2);
	queve q;
	q.push({pos1,pos2});
	while(!q.IsEmpty()){
		p act=q.front();
		q.pop();
		int num=memo[act.first][act.second];
		for(int k=0;k<4;k++){
			int i=act.first+pos_i[k];
			int j=act.second+pos_j[k];
			if(i>=0 && i<n && j>=0 && j<m 
			&& memo[i][j]==0 &&
			( mat[i][j]=='.'|| mat[i][j]=='S')){
				if(mat[i][j]=='S'){
					printf("%d\n",num+1);
				}
				q.push({i,j});
				memo[i][j]=num+1;
			}
		}
	}
	return 0;
}
