#include<bits/stdc++.h>
using namespace std;
const int lim=1e4;
vector<int>lista[lim];
int cant[lim];
int memo[lim];
int people[lim];
void clear(){
	for(int i=0;i<lim;i++){
		cant[i]=0;
		memo[i]=0;
		people[i]=0;
	}
}
int main(){
	queue<int> q;
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int m;
		scanf("%d",&m);		
		for(int j=0;j<m;j++){
			int tmp;
			scanf("%d",&tmp);
			lista[i].push_back(tmp);
		}
		
	}
	int test;
	scanf("%d",&test);
	while(test--){
		clear();
		int m;
		scanf("%d",&m);
		q.push(m);
		memo[m]=1;
		while(!q.empty()){
			int act=q.front();
			q.pop();
			int day=people[act]+1;
			for(auto x:lista[act]){
				if(memo[x]==0){
					//printf("%d %d %d\n",x,act,day);
					if(lista[act].size()==0)break;
					q.push(x);
					memo[x]=1;
					people[x]=day;
				}	
			}
		}
		int mayor=0,pos=0;
		for(int i=0;i<n;i++){
			//printf("%d ",people[i]);
			cant[people[i]]++;
			if(cant[people[i]]>mayor && people[i]>0){
				mayor=cant[people[i]];
				pos=people[i];
			}
			else if(cant[people[i]]==mayor && people[i]>0){
				pos=min(pos,people[i]);
			}
		}	
		//printf("\n");
		if(mayor==0 && pos==0 ){
			printf("0\n");
		}
		else{
			printf("%d %d\n",mayor,pos);	
		}
	}
	return 0;
}
