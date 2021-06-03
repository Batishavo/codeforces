#include<cstdio>
const int lim=1e5;
int n,m,p1,p2,salida[lim][lim];
char mat[lim][lim];
struct pos{
	int i;
	int j;
};
struct nodo{
	nodo *anterior;
	pos valor;
	nodo(){
		anterior=NULL;
	}
	nodo(int x,int y){
		valor.i=x;
		valor.j=y;
	}
};
struct pila{
	nodo*actual;
	pila(){
		actual=NULL;
	}
	bool IsEmpty(){
		return actual==NULL;
	}
	pos top(){
		return actual->valor;
	}
	void push(int x,int y){
		nodo* tmp=new nodo(x,y);
		tmp->anterior=actual;
		actual=tmp;
	}
	void pop(){
		nodo *tmp=actual;
		actual=actual->anterior;
		delete tmp;
	}
};
void bfs(){
	pila p;
	pos nv;
	p.push(p1,p2);
	int pos_i[5]={1,0,-1,0};
	int pos_j[5]={0,1,0,-1};
	while(!p.IsEmpty()){
		pos actual=p.top();
		p.pop();
		int num=salida[actual.i][actual.j];
		for(int k=0;k<4;k++){
			int eje_i=actual.i+pos_i[k];
			int eje_j=actual.j+pos_j[k];
			if(eje_i>=0 && eje_i<n && eje_j>=0 && eje_j<m){
				if(salida[eje_i][eje_j]==0){
					salida[eje_i][eje_j]=num+1;
					p.push(eje_i,eje_j);
				}
			}
		}
	}
}
int main(){
	scanf("%d %d %d %d",&n,&m,&p1,&p2);
	/*for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf(" %c",&mat[i][j]);
		}
	}*/
	bfs();
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("%d ",salida[i][j]);
		}
		printf("\n");
	}
	return 0;
}
