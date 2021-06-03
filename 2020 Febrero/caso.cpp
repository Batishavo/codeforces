#include<bits/stdc++.h>
using namespace std;
int main(){
	int cont=0;
	while(cont<1000){
		for(int i='a';i<='z';i++){
			if(i=='a'||i=='e'||i=='i'||i=='o'||i=='u'||i=='y'){
				printf(".");
			}
			else{
				printf("%c",(char)i);	
			}
			cont++;
			if(cont>=1000)break;
		}	
		for(int i='A';i<='Z';i++){
			if(i=='A'||i=='E'||i=='I'||i=='O'||i=='U'||i=='Y'){
				printf(".");
			}
			else{
				printf("%c",(char)i);	
			}
			cont++;
			if(cont>=1000)break;
		}	
	}
	
	return 0;
}
