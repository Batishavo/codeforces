#include<bits/stdc++.h>
using namespace std;
vector<string>cads;
vector<int>nums;
int conv(string cad){
	int num=0;
	int tmp=1;
	for(int i=cad.length()-1;i>=0;i--){
		num+=(cad[i]-'0')*tmp;
		tmp*=10;
	}
	return num;
}
void result(int mayor){
	//cout<<"entro"<<endl;
	int tam=nums.size();
	int h=0,m=0,s=0;
	for(int i=1;i<=18000;i++){
		int timee=0;
		for(auto x:nums){
			int aux=x*2;
			int com=i%aux;
			if(com<x-5 ){
				timee++;
			}	
		}
		s++;
		if(s>=60){
			s=0;
			m++;
			if(m>=60){
				h++;
				m=0;
			}
		}
		if(timee==tam && i>=mayor){	
		//	cout<<i<<endl;
			if(h<=9){
				cout<<"0";
			}
			cout<<h<<":";
			if(m<=9){
				cout<<"0";
			}
			cout<<m<<":";
			if(s<=9){
				cout<<"0";
			}
			cout<<s<<endl;
			return;
		}
	}
	cout<<"Signals fail to synchronise in 5 hours"<<endl;
}
int main(){
	while(true){
		string tmp;
		getline(cin,tmp);
		for(int i=0;i<tmp.length();i++){
			if(tmp[i]<'0' || tmp[i]>'9'){
				tmp[i]='.';
			}
		}
		//cout<<tmp<<endl;
		if(tmp=="0.0.0"){
			break;
		}
		cads.push_back(tmp);
	}
	int mayor=18000;
	for(auto x:cads){
		int n=x.length();
		string tmp="";
		int tam=0;
		for(int i=0;i<n;i++){
			if(x[i]>='0' && x[i]<='9'){
				tmp+=x[i];
				tam++;
			}
			else if (x[i]=='.'){
				int num=conv(tmp);
				tmp="";
				tam=0;
				//cout<<num<<endl;
				if(num!=0){
					nums.push_back(num);					
					mayor=min(mayor,num);
				}
			}
			if(x[i]=='0' && tam==1){
				/*for(auto y:nums){
					cout<<"__"<<y<<endl;
				}*/
				//i+=1;
			    result(mayor*2);
				nums.clear();
				mayor=18000;
			}
		}
		int num=conv(tmp);
		if(num!=0){
			mayor=min(mayor,num);
		    nums.push_back(num);
		}					
	}
	
	return 0;
}
