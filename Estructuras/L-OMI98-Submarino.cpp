#include<cstdio>
int mat[150][150],posble[150],usados[150][150];
int n,e,t;
struct nodo{
    nodo * next;
    int valor;
    int l;
    nodo(){
        next=NULL;
        valor=0;
        l=0;
    }
    nodo(int x,int y){
        next=NULL;
        valor=x;
        l=y;
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
    int Front(){
        return head->valor;
    }
    int Long(){
        return head->l;
    }
    void push(int val){
        int tam=(head->l)+1;
        nodo * tmp= new nodo(val,tam);
        if(head==NULL){

        }
    }


};
cola q;
void bfs(){
    while(!q.IsEmpty()){
        int numeral=q.top();
        q.pop();
        posible[numeral]=1;
        if(q.l+1<=t){
            for(int i=0;i<n;i++){
                if(usados[numeral][i]==0){
                    usados[numeral][i]=1;
                    q.push(i);
                }
            }
        }
    }
}
int main(){
    scanf("%d %d %d",&n,&e,&t);
    for(int i=0;i<e;i++){
        int aux,aux2;
        scanf("%d %d",&aux,&aux2);
        mat[aux][aux2]=1;
        mat[aux2][aux]=1;
    }
    for(int i=n;i>=0;i--){
        if(mat[n][i]==1){
            q.push(i);
            usados[n][i]=1;
        }
    }
    return 0;
}
