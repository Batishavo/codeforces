#include<queue>
#include<cstdio>
#include<utility>
#include<stdlib.h>
#define fi() for(int i=0;i<n;i++)
#define fj() for(int j=0;j<n;j++)
using namespace std;
typedef pair<int,int> p;
queue<p>myqueue;
const int lim=600;
int mayor=600*600,n,cant;
int mat[lim][lim];
int pos_i[10]={1,0,-1,0};
int pos_j[10]={0,1,0,-1};
int explorer(int mid){
	int mayor=0;
	int mark[lim][lim]={0};
	fi(){
		fj(){
			if(mayor>=cant){
				return mayor;
			}
			if(mark[i][j]==0){
				myqueue.push({i,j});
				int cont=0;		
				while(!myqueue.empty()){
					p actual=myqueue.front();
					myqueue.pop();
					int num=mat[actual.first][actual.second];
					for(int k=0;k<4;k++){
						int x=pos_i[k]+actual.first;
						int y=pos_j[k]+actual.second;
						if(x>=0 && x<n && y>=0 && y<n && mark[x][y]==0){
							int com=mat[x][y];
							if(abs(com-num)<=mid){
								mark[x][y]=1;
								myqueue.push({x,y});
								cont++;	
							}
						}
					}
				}
				
				mayor=(cont>mayor)?cont:mayor;		
			}
		}
	}
	return mayor;
}
int bynari(){
	int ini=0;	
	while(ini<mayor){
		int mid=((ini+mayor)/2)+1;
		int tmp=explorer(mid);
		if(tmp<cant){
			ini=mid+1;
		}
		else{
			mayor=mid;
		}
	}
	return ini;
}
int main(){
	scanf("%d",&n);
	int aux=n*n;
	cant=(aux%2==0)?aux/2:(aux/2)+1;
	fi(){
		fj(){
			scanf("%d",&mat[i][j]);
		}
	}
	printf("%d\n",bynari());
	return 0;
}
