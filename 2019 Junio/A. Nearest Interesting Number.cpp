#include<cstdio>
int num(int n){
	int aux=0,sum=n;
	while(n>0){
		int temp=n%10;
		n/=10;
		aux+=temp;
	}
	if(aux%4==0){
		return sum;
	}	
	else{
		return num(sum+1);
	}
	
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%d\n",num(n));
	return 0;
}
