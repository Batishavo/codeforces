#include<iostream>
using namespace std;
int n;
string cad[100];
int main(){
	cad[0]="zero";
	cad[1]="one";
	cad[2]="two";
	cad[3]="three";
	cad[4]="four";
	cad[5]="five";
	cad[6]="six";
	cad[7]="seven";
	cad[8]="eight";
	cad[9]="nine";
	cad[10]="ten";
	cad[11]="eleven";
	cad[12]="twelve";
	cad[13]="thirteen";
	cad[14]="fourteen";
	cad[15]="fifteen";
	cad[16]="sixteen";
	cad[17]="seventeen";
	cad[18]="eighteen";
	cad[19]="nineteen";
	cad[20]="twenty";
	cad[30]="thirty";
	cad[40]="forty";
	cad[50]="fifty";
	cad[60]="sixty";
	cad[70]="seventy";
	cad[80]="eighty";
	cad[90]="ninety";
	cin>>n;
	if(cad[n]!=""){
		cout<<cad[n];
	}
	else{
		int tmp1=n%10,tmp2=n/10;
		cout<<cad[tmp2*10]<<"-"<<cad[tmp1];
	}
	return 0;
}
