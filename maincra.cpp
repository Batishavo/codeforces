#include<cstdio>
#include <utility> 
using namespace std;
char mat[600][600];
int pasos[600][600];
struct nodo{
	nodo * next;
	pair <int,int>cord;
	nodo(){
		next=NULL;
	}
	nodo(pair<int,int>nv){
		cord=nv;
	}
};
struct cola{
	nodo *head;
	nodo *tail;
	cola(){
		head=NULL;
		tail=NULL;
	}
	bool isEmpty(){
		return head==NULL;
	}
	pair<int,int> front(){
		return head->cord;
	}
	void push(pair<int,int>nv){
		nodo * nd=new nodo(nv);
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
int di[5]={1,0,-1,0};
int dj[5]={0,1,0,-1};
int main(){
	cola q;
	int n,m,ini_i,ini_j,fin_i,fin_j;
	scanf("%d %d %d %d %d %d",&n,&m,&ini_i,&ini_j,&fin_i,&fin_j);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf(" %c",&mat[i][j]);		
		}
	}
	pair <int,int>nv(ini_i,ini_j);
	q.push(nv);
	while(!q.isEmpty()){
		pair <int,int> act =q.front();
		q.pop();
		int num=pasos[act.first][act.second];
		for(int k=0;k<4;k++){
			int pi=act.first+di[k];	
			int pj=act.second+dj[k];
			if(pi>=0 && pi<n && pj>=0 && pj<m && pasos[pi][pj]==0){
				if(mat[pi][pj]=='.'){
					pasos[pi][pj]=num+1;
					pair<int,int> nueva(pi,pj);	
					q.push(nueva);		
				}
				else if(mat[pi][pj]!='#'){
					pasos[pi][pj]=num+(mat[pi][pj]-'0')+1;
					pair<int,int> nueva(pi,pj);	
					q.push(nueva);	
				}
			}
		}
	}
	/*for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("%d ",pasos[i][j]);
		}
		printf("\n");
	}*/
	printf("%d\n",pasos[fin_i-1][fin_j-1]);
	return 0;
}
