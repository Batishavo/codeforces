#include<bits/stdc++.h>
using namespace std;
int head;
int cant;
void imp(int pos,string cad){
    if(pos>cant){
        cout<<cad<<endl;
        return;
    }
    for(int i=1;i<=head;i++){
        char tmp=i+'0';
		imp(pos+1,cad+tmp);
    }
        
}
int main(){
	cin>>head>>cant;
	imp(1,"");
}
