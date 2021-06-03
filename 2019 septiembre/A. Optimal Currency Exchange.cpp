#include<cstdio>
int rublo,dolar,euro,menor;
void  bruta(int pos){
	if(pos*dolar>rublo){
		return;
	}
	int cant_dolar=pos*dolar;
	int num=rublo-cant_dolar;
	int num2=num/euro;
	num2-=num2%5;
	int cant_euro=num2*euro;
	if(rublo-cant_euro-cant_dolar<menor){
		menor=rublo-cant_euro-cant_dolar;
	}
	bruta(pos+1);
}
int main(){
	scanf("%d%d%d",&rublo,&dolar,&euro);
	menor=rublo;
	bruta(0);
	printf("%d\n",menor);
	return 0;
}
