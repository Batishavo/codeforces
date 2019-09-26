#include<iostream>
using namespace std;
int queris;
string t,p,s;
struct nodo{
	nodo* next;
	char valor;
	nodo(){
		next=NULL;
		valor='0';
	}
	nodo(char v){
		valor=v;
		next=NULL;
	}
};
struct cola{
	nodo* head;
	nodo* tail;
	cola(){
		head=NULL;
		tail=NULL;
	}
	bool vacia(){
		return head==NULL;
	}
	char front(){
		return head->valor;
	}
	void push(char valor){
		nodo* nd=new nodo(valor);
		if(tail!=NULL){
			tail->next=nd;
		}
		tail=nd;
		if(head==NULL){
			head=nd;
		}
	}
	void pop(){
		nodo* tmp=head;
		head=head->next;
		if(head==NULL){
			tail=NULL;
		}
		delete tmp;
	}
};
bool can(){
	cola q;
	int bucket[200]={0};
	int pos=0;
	for(int i=0;i<t.length();i++){
		if(pos<s.length() && t[i]==s[pos]){
			pos++;
		}
		else{
			q.push(t[i]);
		}
	}	
	if(pos<s.length()){
		return false;
	}
	for(int i=0;i<p.length();i++){
		bucket[p[i]]++;
	}
	while(!q.vacia()){
		bucket[q.front()]--;
		if(bucket[q.front()]<0){
			return false;
		}
		q.pop();
	}
	return true;
}
int main(){
	cin>>queris;
	while(queris--){
		cin>>s>>t>>p;
		if(s<=t && can()){
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}
	}
	return 0;
}

