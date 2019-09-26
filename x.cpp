#include<cstdio>
int indice[105];
double porcentaje[105];
int times(int dep,double cant,int monts,double loan,double des){
	for(int i=0;i<dep;i++){
		for(int j=indice[i];j<indice[i+1];j++){
			double aux=cant*porcentaje[i];
			cant-=aux;
			loan-=des;
		//	printf("x%lf %lf %lf %d    %d %d\n",cant,loan,porcentaje[i],j,indice[i],indice[i+1]);
			if(loan<cant){
				return j;
			}
		
		}
	}
	int exit=dep-1;
	while(loan<cant){
		double aux=cant*porcentaje[dep-1];
		cant-=aux;
		loan-=des;
		exit++;
		int a;
		scanf("%d",&a);
		printf("___________________________\n%llf %llf %llf %d\n",cant,loan,porcentaje[dep-1],exit);
	}
	return exit;
}
int main(){
	int monts;
	while(scanf("%d",&monts)){
		if(monts<0){
			return 0;
		}
		double down_payment;
		double loan;
		int dep;
		scanf("%llf %llf %d",&down_payment,&loan,&dep);
		for(int i=0;i<dep;i++){
			scanf("%d  %llf",&indice[i],&porcentaje[i]);
		}
		indice[dep]=-1;
		int exit=times(dep,loan+down_payment,monts,loan+down_payment,down_payment);	
		if(exit!=1){
			printf("%d months\n",exit);	
		}
		else{
			printf("1 month\n");
		}
	}
	return 0;
}
