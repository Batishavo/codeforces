#include<cstdio>
struct nodo{
	nodo* ant;
	int val;
	nodo(){
		ant=NULL;
		val=0;
	}
	nodo(int num){
		ant=NULL;
		val=num;
	}
};
struct stack{
	nodo* nd;
	stack(){
		nd=NULL;
	}
	bool vacia(){
		return nd==NULL;
	}
	int front(){
		return nd->val;
	}
	void push(int  num){
		nodo* tmp=new nodo(num);
		tmp->ant=nd;
		nd=tmp;
	}
	void pop(){
		nodo* tmp=nd;
		nd=nd->ant;
		delete tmp;
	}
 
};
int main(){
	stack p;
	for(int i=0;i<10;i++){
		p.push(i);
	}
	while(!p.vacia()){
		printf("%d\n",p.front());
		p.pop();
	}
	return 0;
}
