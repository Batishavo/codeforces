#include<bits/stdc++.h>
using namespace std;
const int lim=1000005;
int snakes[200];
int leaders[200];
int jugador[lim];
void clean(){
	for(int i=0;i<=100;i++){
		leaders[i]=0;
		snakes[i]=0;
	}
}
int main(){
	int q;
	scanf("%d",&q);
	while(q--){
		clean();
		int flag=0;
		int players,snake,dieRolls;
		scanf("%d %d %d",&players,&snake,&dieRolls);
		for(int i=0;i<=players;i++){
			jugador[i]=1;
		}
		for(int i=0;i<snake;i++){
			int num1,num2;
			scanf("%d %d",&num1,&num2);
			if(num1<num2){
				leaders[num1]=num2;
			}
			else{
				snakes[num1]=num2;
			}
		}
		if(leaders[1]==100){
			jugador[1]=100;
			flag=1;
		}
		for(int i=0;i<dieRolls;i++){
			int reco;
			scanf("%d",&reco);
			if(flag==0){
				int playerActual=i%players;
				jugador[playerActual]+=reco;
			//	printf("%d ",jugador[playerActual]);
				if(snakes[jugador[playerActual]]!=0){
					jugador[playerActual]=snakes[jugador[playerActual]];
				//	printf("x\n");
				}
				else if(leaders[jugador[playerActual]]!=0){
					jugador[playerActual]=leaders[jugador[playerActual]];
				//	printf("y\n");
				}
				if(jugador[playerActual]>=100){
					flag=1;
					jugador[playerActual]=100;
				}
			//	printf("%d %d\n",playerActual,jugador[playerActual]);
			}
			
		}
		for(int i=0;i<players;i++){
			printf("Position of player %d is %d.\n",i+1,jugador[i]);
			jugador[i]=1;
		}
	}
	
	
	return 0;
}
