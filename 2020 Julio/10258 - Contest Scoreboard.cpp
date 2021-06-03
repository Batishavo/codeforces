#include<bits/stdc++.h>
using namespace std;
struct score{
	int ID;
	int point;
	int penalty;
	int resuletos[15]={0,0,0,0,0,0,0,0,0,0,0};
	score(){
		ID=0;
		point=0;
		penalty=0;
	}
	score(int id,int po,int pe){
		ID=id;
		point=po;
		penalty=pe;
	}
};	
bool compare(score a,score b){
	if(a.point==b.point){
		if(a.penalty==b.penalty){
			return a.ID<b.ID;
		}
		return a.penalty<b.penalty;
	}
	return a.point>b.point;
}
score mat[200];
int memo[200][15];
int ps[15];
int main(){
	score eraser;
	eraser={0,0,0};
	int n;
	int arr[5];
	int borrar2[15]={0,0,0,0,0,0,0,0,0,0,0};
	char e;
	string cad;
	scanf("%d",&n);
	getline(cin,cad);
	getline(cin,cad);
	while(n--){
		while(true){
			getline(cin,cad);
			if(cad==""){
				break;
			}	
			int pos=0;
			int tmp=1;
			int total=0;
			e=cad[cad.length()-1];
			for(int i=cad.length()-3;i>=0;i--){
				if(cad[i]==' '){
					arr[pos++]=total;
					total=0;
					tmp=1;		
				}
				else{
					total+=(cad[i]-'0')*tmp;
					tmp*=10;
				}
			}
			arr[2]=total;
			if(e=='I'){
				if(memo[arr[2]][arr[1]]==0  ){
					mat[arr[2]].ID=arr[2];
					mat[arr[2]].resuletos[arr[1]]+=20;	
				}
			}
			else if(e=='C'){
				if(memo[arr[2]][arr[1]]==0){
					mat[arr[2]].ID=arr[2];
					mat[arr[2]].point++;
					memo[arr[2]][arr[1]]=1;	
					ps[arr[1]]=1;
					mat[arr[2]].penalty+=arr[0];
				}
			}
			else{
				mat[arr[2]].ID=arr[2];
			}
	
		}
		/*for(int i=1;i<=10;i++){
			printf("%d ",ps[i]);
		}*/
		//printf("\n");
		for(int i=1;i<=100;i++){
			for(int j=1;j<=10;j++){
				mat[i].penalty+=mat[i].resuletos[j];	
				
			}
		}
		sort(mat,mat+100,compare);
		for(int i=0;i<=100;i++){
			if(mat[i].ID){
				printf("%d %d %d\n",mat[i].ID,mat[i].point,mat[i].penalty);
			}
			mat[i]=eraser;
			for(int j=0;j<=10;j++){
				memo[i][j]=0;
				mat[i].resuletos[j]=0;
			}
		}
		for(int i=1;i<=10;i++){
			ps[i]=0;
		}
		printf("\n");
	}
	return 0;
}
