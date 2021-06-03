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
struct pila{
	nodo* head;
	nodo* tail;
	pila(){
		head=NULL;
		tail=NULL;
	}
	bool bacia(){
		return head==NULL;
	}
	int front(){
		return head->val;
	}
	void push(int num){
		nodo* tmp=new nodo(num);
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
		head=tmp->next;
		if(head==NULL){
			tail=NULL;
		}
		delete tmp;
	}
};
int main(){
	pila p;
	for(int i=0;i<10;i++){
		p.push(i);
	}
	while(!p.bacia()){
		printf("%d",p.front());
		p.pop();
	}
	return 0;
}
