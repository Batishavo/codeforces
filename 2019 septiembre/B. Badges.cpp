#include<cstdio>
int Mayor,Menor,total;
int cant(int mayor, int menor){
	if(mayor<0 || menor>Menor || menor+mayor!=total){
		return 0;
	}
	return cant(mayor-1,menor+1)+1;
}
int main(){
	int n,m;
	scanf("%d %d %d",&n,&m,&total);
	int mayor=(n>m)?n:m;
	int menor=(n<m)?n:m;
	Mayor=mayor;
	Menor=menor;
	if(mayor>=total){
		printf("%d\n",cant(total,0));
	}
	else{
		printf("%d\n",cant(mayor,total-mayor));
	}
	return 0;
}
