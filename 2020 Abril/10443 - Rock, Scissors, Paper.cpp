#include<bits/stdc++.h>
using namespace std;
char mat[200][200];
char tmp[200][200];
int n,m,t;
void change(){
	int ejeI[5]={1,-1,0,0};
	int ejeJ[5]={0,0,-1,1};
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			int flag=1;
			char win='R';
			switch (mat[i][j]){
				case 'R':
					win='P';
					break;
				case 'P':
					win='S';
					break;
				default:
					win='R';
					break;
			}
			for(int x=0;x<4;x++){
				int posI=i+ejeI[x];
				int posJ=j+ejeJ[x];
				if(posI<n && posJ<m){
					if(mat[posI][posJ]==win){
						flag=0;
					}
				}
			}
			if(!flag){
				tmp[i][j]=win;
			}
			else{
				tmp[i][j]=mat[i][j];
			}
			
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			mat[i][j]=tmp[i][j];
		}
	}
	
}
int main(){
	int q;
	scanf("%d",&q);
	int flag=0;
	while(q--){
		scanf("%d %d %d",&n,&m,&t);
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				scanf(" %c",&mat[i][j]);
			}
		}
		while(t--){
			change();
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				printf("%c",mat[i][j]);
			}
			cout<<endl;
		}
		if(q!=0){
			cout<<endl;
		}
	}
	
	return 0;
}
