#include<iostream>
using namespace std;
string cad,cad2;
bool can(char p1,char p2){
	if((p1=='a'||p1=='e'||p1=='i'||p1=='o'||p1=='u')&&
	(p2=='a'||p2=='e'||p2=='i'||p2=='o'||p2=='u')){
		return true;
	}
	if((p1!='a'&&p1!='e'&&p1!='i'&&p1!='o'&&p1!='u')
	&& (p2!='a'&&p2!='e'&&p2!='i'&&p2!='o'&&p2!='u')){
	//	cout<<p1<<"x"<<p2;
		return true;
	}
	return false;
}
int main(){
	cin>>cad>>cad2;
	if(cad.length()!=cad2.length()){
		cout<<"No"<<endl;
	}
	else{
		for(int i=0;i<cad.length();i++){
			if(!can(cad[i],cad2[i])){
				cout<<"No"<<endl;
				return 0;
			}
		}
		cout<<"Yes"<<endl;
	}
	return 0;
}
