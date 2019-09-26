#include<cstdio>
#include<iostream>
using namespace std;
const int lim=1e4;
int n,m,p1,p2;
int salida[lim][lim];
char mat[lim][lim];
struct pos{
	int i;
	int j;
	pos(){
		i=0;
		j=0;
	}
	pos(int x,int y){
		i=x;
		j=y;
	}
};
struct nodo{
	nodo *next;
	pos valor;
	nodo(){
		next=NULL;
		valor.i=0;
		valor.j=0;
	}
	nodo(int x,int y){
		next=NULL;
		valor.i=x;
		valor.j=y;
	}
	nodo(pos val){
		next=NULL;
		valor=val;
		//cout<<valor.i<<valor.j<<endl;
	}
};
struct cola{
	nodo* head;
	nodo* tail;
	
	pila(){
		head=NULL;
		tail=NULL;
	}
	bool IsEmpty(){
		return head==NULL;
	}
	int front_i(){
	//	cout<<head->valor.i<<endl;
		return head->valor.i;
	}
	int front_j(){
		return head->valor.j;
	}
	void push(pos val){
		cout<<val.i<<endl;
		nodo* tmp=new nodo(val);
		if(tail!=NULL){
			tail->next=tmp;
			cout<<tail->valor.i<<" "<<tail->valor.j<<endl;	
		}
		tail=tmp;
		if(head==NULL){
			head=tmp;
		}
		//cout<<head->valor.i<<" "<<head->valor.j<<" "<<tail->valor.i<<" "<<tail->valor.j<<endl;
	}
	void pop(){
	//	cout<<"y"<<endl;
		nodo *tmp=head;
		head=head->next;
		if(head==NULL){
			tail==NULL;
		}
		delete tmp;
	}
};
void bfs(){
	cola p;
	pos nv;
	nv.i=p1;
	nv.j=p2;
	p.push(nv);
	int pos_i[5]={1,0,-1,0};
	int pos_j[5]={0,1,0,-1};
	while(!p.IsEmpty()){
		pos actual;
		actual.i=p.front_i();
		actual.j=p.front_j();
		p.pop();
		int num=salida[actual.i][actual.j];
		for(int k=0;k<4;k++){
			int eje_i=actual.i+pos_i[k];
			int eje_j=actual.j+pos_j[k];
			if(eje_i>=0 && eje_i<n && eje_j>=0 && eje_j<m &&
			 mat[eje_i][eje_j]!='D'&&mat[eje_i][eje_j]!='#'
			 &&mat[eje_i][eje_j]!='S'){
				if(salida[eje_i][eje_j]==0){
					salida[eje_i][eje_j]=num+1;
					pos nueva;
					nueva.i=eje_i;
					nueva.j=eje_j;
					p.push(nueva);
				}
			}
		}
	}
}
int main(){
	 cola q;
    for(int i=0;i<10;i++){
    	pos val;
    	val.i = 0;
    	val.j = i;
    	cout<<"x"<<endl;
        q.push(val);
        cout<<"y"<<endl;
    }
    while(!q.IsEmpty()){
        printf("cabeazal %d\n",q.front_i());
        q.pop();

    }
   // printf("%d\n",q.empty1());
	/*scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf(" %c",&mat[i][j]);
			if(mat[i][j]=='S'){
				p1=i;
				p2=j;
			}
		}
	}
	int aux,aux2;
	scanf("%d %d",&aux,&aux2);
	bfs();
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("%d  ",salida[i][j]);
		}
		printf("\n");
	}*/
	return 0;
}
