#include<vector>
#include<cstdio>
using namespace std;
typedef vector<int> v;
struct nodo{
	nodo* actual;
	int pos;
	nodo(){
		actual=NULL;
		pos=0;
	}
	nodo(int num){
		actual=NULL;
		pos=num;
	}
};
struct queve{
	nodo* head;
	nodo* tail;
	queve(){
		head=NULL;
		tail=NULL;
	}
	int front(){
		return head->pos;
	}
	bool IsEmpty(){
		return head==NULL;
	}
	void push(int num){
		nodo* nd= new nodo(num);
		if(tail!=NULL){
			tail->actual=nd;
		}
		tail=nd;
		if(head==NULL){
			head=nd;
		}
	}
	void pop(){
		nodo* tmp=head;
		head=head->actual;
		if(head==NULL){
			tail=NULL;
		}
		delete tmp;
	}
	
};
v myvector[2000];
int memo[2000];
int n,m,k;
int mark;
int main(){
	int cont=0;
	scanf("%d %d %d",&n,&m,&k);
	for(int i=0;i<m;i++){
		int pos1,pos2;
		scanf("%d %d",&pos1,&pos2);
		myvector[pos1].push_back(pos2);
		myvector[pos2].push_back(pos1);
	}	
	queve q;
	q.push(n);
	memo[n]=1;
	while(!q.IsEmpty()){
		int pos=q.front();
		int num=memo[pos];
		q.pop();
		for(int x:myvector[pos]){
			if(memo[x]==0 && memo[pos]+1<=k ){
				memo[x]=num+1;
				q.push(x);	
				cont++;
			}
		}
	}	
	printf("%d\n",cont);
	return 0;
}
