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
struct pila{
	nodo* actual;
	pila(){
		actual=NULL;
	}
	bool vacia(){
		return actual==NULL;
	}
	int front(){
		return actual->val;
	}
	void push(int num){
		nodo* tmp= new nodo(num);
		tmp->ant=actual;
		actual=tmp;
	}
	void pop(){
		nodo* tmp=actual;
		actual=tmp->ant;
		delete tmp;
	}
};
int main(){
	pila p;
	for(int i=0;i<10;i++){
		p.push(i);
	}
	while(!p.vacia()){
		printf("%d\n",p.front());
		p.pop();
	}
	
	return 0;
}
