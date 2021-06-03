#include<iostream>
using namespace std;
int n,menor[10];
string cad,cads[10];
void CreateStrings(){
	for(int i=0;i<n;i++){
	int num=i%3;
	switch (num){
		case 0:
			cads[0]+='R';
			cads[1]+='G';
			cads[2]+='B';
			cads[3]+='R';
			cads[4]+='G';
			cads[5]+='B';	
		break;
		case 1:
			cads[0]+='B';
			cads[1]+='R';
			cads[2]+='G';
			cads[3]+='G';
			cads[4]+='B';
			cads[5]+='R';	
		break;
		case 2:
			cads[0]+='G';
			cads[1]+='B';
			cads[2]+='R';
			cads[3]+='B';
			cads[4]+='R';
			cads[5]+='G';	
		break;
		}
	}
}
void Diferencias(){
	for(int i=0;i<6;i++){
		for(int j=0;j<n;j++){
			if(cad[j]!=cads[i][j])
				menor[i]++;
		}
	}
}
int main(){
	cin>>n>>cad;
	CreateStrings();
	Diferencias();
	int pivote=0;
	int temp=menor[0];
	for(int i=1;i<6;i++){
		if(menor[i]<temp){
			pivote=i;
			temp=menor[i];
		}
	}
	switch (pivote){
		case 0:
			cout<<menor[0]<<endl<<cads[0];
		break;
		case 1:
			cout<<menor[1]<<endl<<cads[1];
		break;
		case 2:
			cout<<menor[2]<<endl<<cads[2];
		break;
		case 3:
			cout<<menor[3]<<endl<<cads[3];
		break;
		case 4:
			cout<<menor[4]<<endl<<cads[4];
		break;
		case 5:
			cout<<menor[5]<<endl<<cads[5];
		break;
	
	} 
	return 0;
}
