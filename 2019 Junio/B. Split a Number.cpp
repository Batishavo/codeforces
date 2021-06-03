#include<iostream>
#include<string>
using namespace std;
int n;
string cad,exi;
string suma(string cad1,string cad2){
	string aux,salida;
	int dep=cad1.length()-cad2.length();
	int temp=0;
	for(int i=cad1.length()-1;i>=0;i--){
		int sum1=cad1[i]-'0';
		int sum2=0;
		if(i-dep>=0){
			sum2=cad2[i-dep]-'0';
		}
//		cout<<sum1<<" "<<sum2<<endl;
		int suma=(sum1+sum2+temp)%10;
		temp=(sum1+sum2+temp)/10;
		aux+=suma+'0';
	}
	if(temp!=0)
		aux+=temp+'0';
	for(int i=aux.length()-1;i>=0;i--){
		salida+=aux[i];
	}
	//cout<<cad1<<" "<<cad2<<" "<<salida<<endl;
	return salida;
}
bool menor(string temp){
	if(temp.length()<exi.length()){
		return true;
	}
	else if(temp.length()==exi.length()){
		for(int i=0;i<temp.length();i++){
			int num1=temp[i]-'0',num2=exi[i]-'0';
			if(num1<num2){
				return true;
			}
			else if(num1>num2){
				return false;
			}
			
		}
	}
	return false;
}
int main(){
	cin>>n>>cad;
	exi=cad;
	for(int i=n/2;i<n;i++){
		if(cad[i]!='0'){
			string cad1=cad.substr(0,i);
			string cad2=cad.substr(i,n);
			string temp;
			if(cad1.length()>=cad2.length()){
				temp=suma(cad1,cad2);	
			}
			else{
				temp=suma(cad2,cad1);
			}
			if(menor(temp)){
				exi=temp;
			}
			else{
				break;
			}
		}
	}
	for(int i=n/2;i>=0;i--){
		if(cad[i]!='0'){
			string cad1=cad.substr(0,i);
			string cad2=cad.substr(i,n);
			string temp;
			if(cad1.length()>=cad2.length()){
				temp=suma(cad1,cad2);	
			}
			else{
				temp=suma(cad2,cad1);
			}
			if(menor(temp)){
				exi=temp;
			}
			else{
				break;
			}
		}
	}
	cout<<exi<<endl;
	return 0;
}
