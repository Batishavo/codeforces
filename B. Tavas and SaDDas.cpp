#include<iostream>
using namespace std;
int n;
bool conv(int num){
//	cout<<"y"<<endl;
	while(num>0){
		char tmp=(num%10)+'0';
		num/=10;
		if(tmp!='4' && tmp!='7'){
		//	cout<<tmp<<endl;
			return false;
		}
	}
	return true;
}
int cant(){
	int pivote=4,lim=8,sum=0;
	while(pivote<=n){
		for(int i=pivote;i<lim;i++){
			if(i<=n){
				if(conv(i)){
				//	cout<<"x"<<endl;
					sum++;
				}
			//	cout<<i<<endl;		
			}
		}
		pivote*=10;
		lim*=10;
	}
	return sum;
}
int main(){
	cin>>n;
	cout<<cant();
	return 0;
}
