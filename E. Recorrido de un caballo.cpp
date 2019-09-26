#include<cstdio>
#include<utility>
using namespace std;
typedef pair<int, int> p;
int mat[200][200];
struct nodo{
	nodo* next;
	p value;
	nodo(){
		next=NULL;
		value={0,0};
	}
	nodo(p num){
		next=NULL;
		value=num;
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
		return head->value;
	}
	bool IsEmpty(){
		return head==NULL;
	}
	void push(p val){
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
};
int main(){
	int n,m,start_i,start_j,finaly_i,finaly_j,x,y;
	scanf("%d%d %d%d %d%d %d%d",&n,&m,&start_j,&start_i,&finaly_j,&finaly_i,&x,&y);
	int pos_i[10]={x,x,-x,-x,y,y,-y,-y};
	int pos_j[10]={y,-y,y,-y,x,-x,x,-x};
	myqueve q;
	q.push({start_i,start_j});
	while(!q.IsEmpty()){
		p act=q.front();
		int num=mat[act.first][act.second];
		q.pop();
		for(int k=0;k<8;k++){
			int i=act.first+pos_i[k];
			int j=act.second+pos_j[k];
			if(i>=1 && i<=n && j>=1 && j<=m && mat[i][j]==0){
				q.push({i,j});
				mat[i][j]=num+1;
			}
		}
	}
	/*for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			printf("%d",mat[i][j]);
		}
		printf("\n");
	}*/
	printf("%d\n",(mat[finaly_i][finaly_j]!=0)?mat[finaly_i][finaly_j]:-1);
	return 0;
}
