#include<cstdio>
int flag;
int can(int h,int s,int r,int p){
	int cont=1;
	double dis=(double)s,mul=(double)p/100;
	while(dis<=h && dis>=0){
		dis-=r;
		if(dis<=0){
			break;
		}
		double res=double(s)*(mul*(double)cont);
		dis+=s-res;
		printf("%llf %llf\n",dis,res);
		cont++;
	}
	if(dis<h){
		flag=0;
	}
	return cont;
}
int main(){
	int heigth,speed,sub,por;
	while(true){
		scanf("%d",&heigth);
		if(heigth==0){
			printf("x");
			return 0;
		}
		flag=1;
		scanf("%d %d %d",&speed,&sub,&por);
		int num=can(heigth,speed,sub,por);
		if(flag){
			printf("success on day %d\n",num);
		}
		else{
			printf("failure on day %d\n",num);
		}
	}	
}
