#include<iostream>
using namespace std;
string cad;
int n,sum=1,tmp;
int main(){
	cin>>cad;
	if(cad.length()>1){
		tmp=(cad[cad.length()-2])-'0';
		tmp*=10;
	}
	n=(cad[cad.length()-1])-'0';
	n+=tmp;
	//cout<<n<<endl;
	switch (n%4){
		case 1:
			sum+=5;
		break;
		case 2:
			sum+=3;
		break;
		case 3:
			sum+=5;
		break;
		default:
			sum+=7;
		break;	
	}
	switch (n%2){
		case 1:
			sum+=4;
		break;
		default:
			sum+=6;
		break;
	}
	cout<<(sum%5)<<endl;	
	return 0;
}
