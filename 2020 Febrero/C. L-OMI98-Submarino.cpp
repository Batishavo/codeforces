#include<cstdio>
#include<utility>
using namespace std;
struct nodo{
	int val;
	nodo* next;
	nodo(){
		val=0;
		next=NULL;
	}
	nodo(int x){
		val=x;
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
	int front(){
		return head->val;
	}
	bool isEmpty(){
		return head==NULL;
	}
	void push(int val){	
		nodo* nd=new nodo(val);
		if(tail!=NULL){
			tail->next=nd;
		}
	//	printf("y\n");
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
int mat[150][150];
int memo[150][150];
int can[150];
int main(){
	stack q;
	int n,e,t;
	scanf("%d %d %d",&n,&e,&t);
	for(int i=0;i<e;i++){
		int tmp,tmp2;
		scanf("%d%d",&tmp,&tmp2);
		mat[tmp][tmp2]=1;
		mat[tmp2][tmp]=1;
	}
	q.push(n);
	int cont=0;
	can[n]=1;
	while(!q.isEmpty()){
		int act=q.front();
		int cant=can[act];
		q.pop();
		for(int i=1;i<=n;i++){
			if(mat[i][act]==1 && mat[act][i]==1 &&
			memo[i][act]==0 && memo[act][i]==0 && cant<t && can[i]==0){
			//	printf("%d %d %d\n",act,i,cant);
				q.push(i);
				memo[i][act]=1;
				memo[act][i]=1;
				can[i]=cant+1;
			}	
		}
	}
	for(int i=1;i<n;i++){
		if(can[i]>0){
			cont++;
		}
	}
	printf("%d\n",cont);
	return 0;
}
