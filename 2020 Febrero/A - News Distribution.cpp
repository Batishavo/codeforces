#include<bits/stdc++.h>
using namespace std;
const int lim=1e6;
int n,m;
vector<int>grupos[lim];
vector<int>amigos[lim];
int use_grups[lim];
int use_friends[lim];
int type[lim];
int total[lim];
queue <int> q;
int main(){
	scanf("%d%d",&n,&m);
	for(int i=1;i<=m;i++){
		int aux;
		scanf("%d",&aux);
		for(int j=1;j<=aux;j++){
			int tmp;
			scanf("%d",&tmp);
			grupos[i].push_back(tmp);
			amigos[tmp].push_back(i);
		}
	}
	int cont=1;
	/*for(int i=1;i<=m;i++){
		printf("%d:",i);
		for(auto x:grupos[i]){
			printf("%d ",x);		
		}
		printf("\n");
	}
	for(int i=1;i<=n;i++){
		printf("%d:",i);
		for(auto x:amigos[i]){
			printf("%d ",x);		
		}
		printf("\n");
	}*/
	for(int i=1;i<=n;i++){
		if(use_friends[i]==0){
			total[cont]++;
		//	printf("%d:",i);
			use_friends[i]=1;
			q.push(i);
			while(!q.empty()){
				int act=q.front();
				type[act]=cont;
				q.pop();
				for(auto x: amigos[act]){
				//	printf("x%d ",x);
					if(use_grups[x]==0){
						use_grups[x]=1;
					//	printf("__");
						for(auto y: grupos[x]){
							if(use_friends[y]==0){
								use_friends[y]=1;
								q.push(y);
								type[y]=cont;
				//				printf("y%d ",y);
								total[cont]++;
							}
						}
					}		
				}	
				
			}
			printf("\n");
			cont++;	
		}
	}
	for(int i=1;i<=n;i++){
		printf("%d ",total[type[i]]);
	}
	
}
