#include<iostream>
using namespace std;
const int lim=3e5;
int bucket[lim+5][200],temp[200];
int n;
string cad;
bool can(int mid){
	for(int i='a';i<='z';i++){
		if(bucket[mid][i]<temp[i]){
			return false;
		}
	}
	return true;
}
int bynari(string name){
	int ini=0,fin=n-1,exit=0;
	for(int i=0;i<name.length();i++){
		temp[name[i]]++;
	}
	while(ini<fin){
		int mid=((ini+fin)/2)+1;
		if(can(mid)){
			fin=mid-1;
			exit=mid+1;
		}
		else {
			ini=mid;
		}
	}
	for(int i='a';i<='z';i++){
		temp[i]=0;
	}
	return exit;
}
int main(){
	int m;
	cin>>n>>cad>>m;
	bucket[0][cad[0]]=1;
	for(int i=1;i<n;i++){
		for(int j='a';j<='z';j++){
			bucket[i][j]=bucket[i-1][j];
		}
		bucket[i][cad[i]]=bucket[i-1][cad[i]]+1;
	}
	while(m--){
		string name;
		cin>>name;
		if(name.length()==1 && name[0]==cad[0]){
			printf("1\n");
		}
		else{
			printf("%d\n",bynari(name));	
		}
		
	}
	return 0;
}
