#include<bits/stdc++.h>
using namespace std;
string names[2000];
int points[2000];
map<string,int>myMap;
map<string,int>winnerMap;
map<string,int>mark;
int main(){
	int n,mayor=0,pos=0;
	cin>>n;
	for(int i=0;i<n;i++){
		string aux;
		int num;
		cin>>aux>>num;
		names[i]=aux;
		points[i]=num;
		myMap[aux]+=num;
	}
	for(auto x:myMap){
		if(x.second>mayor){	
			mayor=x.second;
		}
	}
	for(auto x:myMap){
		if(x.second==mayor){
			//cout<<x.first<<" "<<x.second<<endl;	
			mark[x.first]=1;
		}
	}
	string winner;
	for(int i=0;i<n;i++){
		if(mark[names[i]]==1){
		
			winnerMap[names[i]]+=points[i];
			if(winnerMap[names[i]]>=mayor){
				winner=names[i];
				break;
			}
		}
	}
	cout<<winner<<endl;
	
	
	return 0;
}
