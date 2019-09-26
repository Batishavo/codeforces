#include<cstdio>
#include <stdlib.h>
int n,e,t,salida;
int mat[200][200],posible[200],mark[200][200];
struct nodo{
	nodo*sigiente;
	int valor;
	int longitud;
	nodo(){
		sigiente=NULL;
		valor=0;
		longitud=0;
	}
	nodo (int x,int y){
		sigiente=NULL;
		valor=x;
		longitud=y;
	}
};
struct cola{
	nodo*head;
	nodo*tail;
	cola(){
		head=NULL;
		tail=NULL;
	}
	bool IsEmpty(){
		return head==NULL;
	}
	int front(){
		return head->longitud;
	}
	void push(int val,int tam){
		printf("%d %d\n",val,tam);
		system("pause");
		nodo* tmp=new nodo(val,tam);
		if(tail!=NULL){
			tail->sigiente=tmp;
		}
		if(head==NULL){
			head=tmp;
		}
		tail=tmp;
		
	}
	int pop(){
		int salida=head->valor;
		nodo *tmp=head;
		head=head->sigiente;
		delete tmp;
		if(head==NULL){
			tail==NULL;
		}
		return salida;
	}
};
int main(){
	cola q;
	scanf("%d %d %d",&n,&e,&t);
	for(int i=0;i<e;i++){
		int aux1,aux2;
		scanf("%d %d",&aux1,&aux2);
		mat[aux1][aux2]=1;
		mat[aux2][aux1]=1;
	}
	for(int i=n;i>=0;i--){
		if(mat[n][i]==1){
			q.push(i,1);	
			mark[i][n]=1;
			mark[n][i]=1;
		}
	}
	while(!q.IsEmpty()){
		int cant=q.front();
		int num=q.pop();
		//printf("%d %d",cant,num);
		for(int i=n;i>=0;i--){
			if(mark[i][num]==0 && cant<=t &&  mark[num][i]==0){
				mark[i][num]=1;
				mark[num][i]=1;
				q.push(i,cant+1);
			}
		}
	}
	for(int i=0;i<n;i++){
		if(posible[n]==1){
			salida++;
		}
	}
	printf("%d\n",salida);
	return 0;
}
