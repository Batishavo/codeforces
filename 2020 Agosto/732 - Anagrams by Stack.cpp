#include<bits/stdc++.h>
using namespace std;
char cad[200];
string anagram;
int lon;
void can(string tmp,int indi,string myStack,string finalCad,int pos){
	//cout<<tmp<<endl<<finalCad<<endl;
	if(pos>anagram.length()){
		return ;
	}
	if(indi==lon){
		if(anagram==finalCad ){
			cout<<tmp<<endl;	
		}
		return;
	}
	can(tmp+"i",indi+1,myStack+cad[pos],finalCad,pos+1);
	if(myStack!=""){
		char aux=myStack[myStack.length()-1];
		string newCad=myStack.substr(0,myStack.length()-1);
		//cout<<newCad<<" "<<myStack<<endl;
		can(tmp+"o",indi+1,newCad,finalCad+aux,pos);	
	}
}
int main(){
	while((scanf("%s",cad))!=EOF){
		cin>>anagram;
		lon=strlen(cad);
		lon*=2;
		string myStack="";
		myStack+=cad[0];
		cout<<"["<<endl;
		can("i",1,myStack,"",1);
		cout<<"]"<<endl;
	}
	return 0;
}
