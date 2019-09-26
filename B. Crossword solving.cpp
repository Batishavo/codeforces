#include<iostream>
#include<vector>
using namespace std;
vector<int>location;
string str_short,str_big;
int size_short,size_big;
void exit(){
	int small=100000;
	for(int i=0;i<=size_big-size_short;i++){
		int aux=0;
		vector<int>temp;
		for(int j=0;j<size_short;j++){
			if(str_short[j]!=str_big[j+i]){
				aux++;
				temp.push_back(j+1);
			}
		}
		if(small>aux){
			small=aux;
			location=temp;	
		}
	}
	cout<<small<<endl;
}
int main(){
	cin>>size_short>>size_big;
	cin>>str_short>>str_big;
	exit();
	for(int i=0;i<location.size();i++){
		cout<<location[i]<<" ";
	}
	return 0;
}
