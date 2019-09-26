#include<cstdio>
int a,b,resultado,menor,mayor;
bool can(){
	if(resultado<0){
		while(b<a){
			a+=resultado;
		}
	}
	else{
		while(b>a){
			a+=resultado;
		}	
	}
	
	if(a==b){
		return true;
	}
	else{
		return false;
	}
}
int main(){
	scanf("%d %d %d",&a,&b,&resultado);
	if(can()){
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}
	return 0;
}
