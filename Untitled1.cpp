#include<iostream>
using namespace std;
string strin;
int main(){
	cin>>strin;
	int tmp='Z'-'z';
	for(int i=0;i<strin.length();i++){
		if(strin[i]>'Z')
			strin[i]+=tmp;
	}
	cout<<strin;
}
