#include<cstdio>
struct nodo{
	nodo* next;
	int val;
	nodo(){
		next=NULL;
		val=0;
	}
	nodo(int num){
		next=NULL;
		val=num;
	}
};
struct queve{
	nodo* head;
	nodo* tail;
	queve(){
		head=NULL;
		tail=NULL;
	}
	bool vacia(){
		return head==NULL;
	}
	int front(){
		return head->val;
	}
	void push(int num){
		nodo* nd=new nodo(num);
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
	queve q;
	for(int i=0;i<10;i++){
		q.push(i);
	}
	while(!q.vacia()){
		printf("%d\n",q.front());
		q.pop();
	}
	return 0;
}
