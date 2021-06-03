#include<cstdio>
#include<utility>
using namespace std;
typedef pair<int,int> p;
struct nodo{
	nodo* act;
	p pos;
	nodo(){
		act=NULL;
		pos={0,0};
	}
	nodo(p numero){
		act=NULL;
		pos=numero;
	}
};
struct myqueve{
	nodo* head;
	nodo* tail;
	myqueve(){
		head=NULL;
		tail=NULL;
	}
	p front(){
		return head->pos;
	}
	bool IsEmpty(){
		return head==NULL;
	}
	void push(p numero){
		nodo* nd= new nodo(numero);
		if(tail!=NULL){
			tail->act=nd;
		}
		tail=nd;
		if(head==NULL){
			head=nd;
		}
	}
	void pop(){
		nodo* tmp=head;
		head=head->act;
		if(head==NULL){
			tail=NULL;
		}
		delete tmp;
	}
};
int mat[100][100],memo[100][100];
int posi[5]={1,0,-1,0};
int posj[5]={0,1,0,-1};
int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&mat[i][j]);
		}
	}
	int pos1_i,pos1_j,pos2_i,pos2_j;
	scanf("%d %d %d %d",&pos1_i,&pos1_j,&pos2_i,&pos2_j);
	myqueve q;
	q.push({pos1_i,pos1_j});
	while(!q.IsEmpty()){
		p actual=q.front();
		q.pop();
		int num=memo[actual.first][actual.second];
	//	printf("%d\n",num);
		for(int k=0;k<5;k++){
			int i=actual.first+posi[k];
			int j=actual.second+posj[k];
			if(i>=0 && i<n && j>=0 && j<m && memo[i][j]==0 && mat[i][j]==0){
				memo[i][j]=num+1;
				q.push({i,j});
			}
		}
	}
	/*for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("%d ",memo[i][j]);
		}
		printf("\n");
	}*/
	printf("%d\n",memo[pos2_i][pos2_j]+1);
	return 0;
}
