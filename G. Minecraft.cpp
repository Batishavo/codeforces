#include<queue>
#include<utility>
#include<cstdio>
using namespace std;
typedef pair<int,int> p;
const int lim=2e3;
queue<p>q;
char mar[lim+5][lim+5];
int memo[lim+5][lim+5];
int pos_i[5]={1,0,-1,0};
int pos_j[5]={0,1,0,-1};
int main(){
	int n,m;
	int pos1,pos2,fin1,fin2;
	scanf("%d%d %d%d %d%d",&n,&m,&pos1,&pos2,&fin1,&fin2);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf(" %c",&mat[i][j]);
		}
	}
	q.push({pos1,pos2});
	while(!q.empty()){
		p act=q.front();
		int memo[act.first][act.second];
		q.pop();
		for(int k=0;k<4;k++){
			int i=act.first+pos_i[k];
			int j=act.second+pos_j[k];
			if(i>=1 && i<=n && j>=1 && j<=m && mat[i][j]!='#'){
				if(mat[i][j]=='.'){
					if(num+1<memo[i][j] || memo[i][j]==0){
						memo[i][j]=num+1;
						q.push({i,j});	
					}
				}
				else{
					int temp=mat[i][j]-'0';
					if(num+temp+1<memo[i][j] || memo[i][j]==0){
						memo[i][j]=num+temp+1;
						q.push({i,j});
					}					
				}
			}
		}
	}
	printf("%d\n",memo[fin1][fin2]);
	return 0;
}
