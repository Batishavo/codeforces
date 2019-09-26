#include<cstdio>
struct nodo{
	nodo* act;
	int num;
	nodo(){
		act=NULL;
		num=0;
	}
	nodo(int numero){
		act=NULL;
		num=numero;
	}
};
struct myqueve{
	nodo* head;
	nodo* tail;
	myqueve(){
		head=NULL;
		tail=NULL;
	}
	int front(){
		return head->num;
	}
	bool IsEmpty(){
		return head==NULL;
	}
	void push(int numero){
		nodo* tmp=new nodo(numero);
		if(tail!=NULL){
			tail->act=tmp;
		}
		tail=tmp;
		if(head==NULL){
			head=tmp;
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
const int lim=1e4;
int memo[lim+5];
int main(){
	myqueve q;
	int mul,div,n;	
	scanf("%d %d %d",&mul,&div,&n);
	q.push(1);
	while(!q.IsEmpty()){
		int actual=q.front();
		int num=memo[actual];
		q.pop();
		//printf("%d %d\n",num,actual);
		if(actual*mul<lim && memo[actual*mul]==0){
			q.push(actual*mul);
			memo[actual*mul]=num+1;
		}
		if(actual/div>0 && memo[actual/div]==0){
			q.push(actual/div);
			memo[actual/div]=num+1;
		}
	}
	printf("%d\n",memo[n]);
	return 0;
}
