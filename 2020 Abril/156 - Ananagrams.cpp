#include<bits/stdc++.h>
using namespace std;
const int lim=1e5;
string arr[lim];
string arr2[lim];
string salida[lim];
int memo[lim];
int main(){
	string cad="";
	int cont=0,cont2=0;
	while(true){
		getline(cin, cad);
		if(cad=="#"){
			break;
		}
		string tmp="";
		for(int i=0;i<cad.length();i++){
			if(cad[i]==' '){
				arr[cont++]=tmp;
				tmp="";
				continue;
			}
			tmp+=cad[i];
		}
		arr[cont++]=tmp;
	}
	for(int i=0;i<cont;i++){
		string tmp=arr[i];
		transform(tmp.begin(),tmp.end(),tmp.begin(), ::tolower); 
		sort(tmp.begin(),tmp.end());	
		int flag=1;
	//	cout<<tmp<<" "<<arr[i]<<endl;
		if(memo[i]==0){
			for(int j=i+1;j<cont;j++){
				string tmp2=arr[j];
				transform(tmp2.begin(),tmp2.end(),tmp2.begin(), ::tolower);
				sort(tmp2.begin(),tmp2.end());
				if(tmp==tmp2){
					//cout<<arr[i]<<" "<<arr[j]<<endl;
					memo[j]=1;
					flag=0;
				}
			}
			if(flag==1){
				arr2[cont2++]=arr[i];
			}	
		}
	}
	sort(arr2,arr2+cont2);
	for(int i=0;i<cont2;i++){
		cout<<arr2[i]<<endl;
	}
	return 0;
}
