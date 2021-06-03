#include<cstdio>
#include<utility>
using namespace std;
typedef pair<int,int> p;
struct nodo{
	nodo* next;
	p num;
	nodo(){
		next=NULL;
		num={0,0};
	}
	nodo(p value){
		next=NULL;
		num=value;
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
		return head->num;
		
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
int mat[2000][2000];
int dire[2000][3];
int main(){
	int n,m,k;
	scanf("%d %d %d",&n,&m,&k);
	int pos1,pos2,fin1,fin2;
	scanf("%d %d %d %d",&pos1,&pos2,&fin1,&fin2);
	for(int x=0;x<k;x++){
		scanf("%d %d",&dire[x][0],&dire[x][1]);
	}
	myqueve q;
	q.push({pos1,pos2});
	while(!q.IsEmpty()){
		p actual=q.front();
		int num=mat[actual.first][actual.second];
		q.pop();
		for(int x=0;x<k;x++){
			int i=actual.first+dire[x][0];
			int j=actual.second+dire[x][1];
			if(i>=1 && i<=n && j>=1 && j<=m && mat[i][j]==0){
				mat[i][j]=num+1;
				q.push({i,j});
			}
		}
	}
	/*for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			printf("%d",mat[i][j]);
		}
		printf("\n");
	}*/
	if(pos1==fin1 && fin2==pos2){
		printf("0\n");
		return 0;
	}
	printf("%d\n",(mat[fin1][fin2]==0)?-1:mat[fin1][fin2]);
	return 0;
}
