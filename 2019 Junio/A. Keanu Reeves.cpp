#include<iostream>
using namespace std;
int n;
string cad,aux,aux2;
bool can(){
	int num_0=0,num_1=0;
	for(int i=0;i<n;i++){
		if(cad[i]=='1'){
			num_1++;
		}
		else{
			num_0++;
		}
	}
	return !(num_0==num_1);
}
void str(){
	int cont_0=0,cont_1=0;
	for(int i=0;i<n;i++){
		if(cad[i]=='1'){
			cont_1++;
		}
		else{
			cont_0++;
		}
		int contj_0=0,contj_1=0;
		for(int j=i+1;j<n;j++){
			if(cad[j]=='1'){
				contj_1++;
			}
			else{
				contj_0++;
			}	
		}
		if(cont_0!=cont_1 && contj_0!=contj_1){
		//	cout<<i<<endl;
			aux=cad.substr(0,i+1);
			aux2=cad.substr(i+1,n);
			return;
		}
	}
}
int main(){
	cin>>n>>cad;
	if(n==1){
		cout<<"1\n"<<cad<<"\n";
	}
	else{
		if(can()){
			cout<<"1\n"<<cad<<endl;
		}
		else{
			str();
			cout<<"2\n"<<aux<<" "<<aux2<<endl;
		}
	}
	
	return 0;
}
