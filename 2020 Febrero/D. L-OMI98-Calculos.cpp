#include<cstdio>
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
	void push(int x){
		nodo* nd=new nodo(x);
		if(tail!=NULL){
			tail->next=nd;
		}
		tail=nd;
		if(head==NULL){
			head=nd;
		}
	}
	void pop(){
		nodo* nd=head;
		head=head->next;
		if(head==NULL){
			tail=NULL;
		}
		delete nd;
		
	}
};
int memo[10005];		
int main(){
	stack q;
	int a,b,n;
	scanf("%d %d %d",&a,&b,&n);
	q.push(1);
	while(!q.isEmpty()){
		int act=q.front();
		int cont=memo[act];
		q.pop();
		if(act*a<=9999 && memo[act*a]==0){
			q.push(act*a);
			memo[act*a]=cont+1;
		}
		if(act/b>0 && memo[act/b]==0){
			q.push(act/b);
			memo[act/b]=cont+1;
		}
	}
	printf("%d\n",memo[n]);
	return 0;
}
