#include<cstdio>
int a,b,n;
int memo[1000000];
struct nodo{
	nodo * next;
	int val,pos;
	nodo(){
		next=NULL;
		val=0;
		pos=0;
	}
	nodo(int valor,int tam){
		next=NULL;
		val=valor;
		pos=tam;
	}
};
struct cola{
	nodo * head;
	nodo * tail;
	cola(){
		head=NULL;
		tail=NULL;
	}
	bool IsEmpty(){
		return head==NULL;
	}
	void push(int val,int tam){
		nodo * tmp=new nodo(val,tam);
		if(head==NULL){
			head=tmp;
		}
		if(tail!=NULL){
			tail->next=tmp;
		}
		tail=tmp;
	}
	int front(){
		return head->pos;
	}
	int pop(){
		int valor=head->val;
		nodo * nd= head ;
		head=head->next;
		if(head==NULL){
			tail=NULL;
		}
		delete nd;
		return valor;
	}
};
int main(){
	cola q;
	scanf("%d %d %d",&a,&b,&n);
	q.push(1,0);
	while(!q.IsEmpty() ){
		int lon=q.front();
		int tam=q.pop();
		//printf("%d %d\n",lon,tam);
		if(tam==n){
			printf("%d\n",lon);
			break;
		}
		if(tam>0 && tam<10000 &&(memo[tam]==0  || memo[tam]>lon) ){
			memo[tam]=lon;
			q.push(tam*a,lon+1);
			q.push(tam/b,lon+1);
		}
	}
	return 0;
}
