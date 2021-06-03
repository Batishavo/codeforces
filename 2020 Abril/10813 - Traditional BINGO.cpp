#include<bits/stdc++.h>
using namespace std;
int mat[10][10];
int use[10][10];
int bucket[80];
bool winer(){
	int cont3=0,cont4=0,x=4;
	for(int i=0;i<5;i++){
		int cont=0,cont2=0;
		for(int j=0;j<5;j++){
			if(use[i][j]==1){
				cont++;
			}
			if(use[j][i]==1){
				cont2++;
			}
			if(i==j && use[i][j]==1){
				cont3++;
			}
		}
		if(use[i][x--]==1){
			cont4++;
		}
		if(cont==5 || cont2==5){
			return true;
		}	
	}
	if(cont3==5 || cont4==5){
		return true;
	}
	return false;
}

int main(){
	int q;
	scanf("%d",&q);
	while(q--){
		for(int i=0;i<=75;i++){
			bucket[i]=0;
		}
		for(int i=0;i<5;i++){
			for(int j=0;j<5;j++){
				use[i][j]=0;
			}
		}
		for(int i=0;i<5;i++){
			for(int j=0;j<5;j++){
				if(i==2 && j==2){
					use[i][j]=1;
					continue;
				}
				int tmp;
				scanf("%d",&tmp);
				bucket[tmp]=1;
				mat[i][j]=tmp;
			}
		}
		int flag=1,pos=0;
		for(int x=0;x<75;x++){
			int aux;
			scanf("%d",&aux);
			if(bucket[aux]==1){
				for(int i=0;i<5;i++){
					for(int j=0;j<5;j++){
						if(mat[i][j]==aux){
							use[i][j]=1;
							if(winer() && flag==1){
							/*	for(int m=0;m<5;m++){
									for(int l=0;l<5;l++){
										cout<<use[m][l];
									}
									cout<<endl;
								}*/
								pos=x+1;
								flag=0;
							}
						/*	if(x==41){
								for(int m=0;m<5;m++){
									for(int l=0;l<5;l++){
										cout<<use[m][l];
									}
									cout<<endl;
								}
								cout<<"______"<<endl;
							}*/
						}
					}
				}
			}
		}
		printf("BINGO after %d numbers announced\n",pos);
	}
	return 0;
}
