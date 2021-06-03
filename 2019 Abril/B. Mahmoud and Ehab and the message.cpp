#include<map>
#include<iostream>
using namespace std;
const int lim=1e6;
long long may=1e10;
int n,m,k;
long long sum;
map<string,int>Mymap;
string arr[lim];
int tmp[lim];
int main(){
	cin>>n>>m>>k;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		int tmp;
		cin>>tmp;
		Mymap[arr[i]]=tmp;
	}
	while(m--){
		int aux;
		cin>>aux;
		long long menor=may;
		for(int i=0;i<aux;i++){
			cin>>tmp[i];
			if(Mymap[arr[tmp[i]-1]]<menor){
				menor=Mymap[arr[tmp[i]-1]];
			//	cout<<" x"<<menor<<endl;
			}
		}
		for(int i=0;i<aux;i++){
			Mymap[arr[tmp[i]-1]]=menor;
		}
		
	}
	while(k--){
		string cad;
		cin>>cad;
		sum+=Mymap[cad];
		
	}
	cout<<sum<<endl;
	return 0;
}
