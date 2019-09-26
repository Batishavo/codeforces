#include<cstdio>
#include<map>
#include<math.h>
using namespace std;
map<long long ,int>mymap;
long long mcd(long long menor,long long mayor){
	while(mayor%menor!=0){
		long long temp=mayor%menor;
		mayor=menor;
		menor=temp;
	}
	return menor;
}
long long div(long long ant){
	int cont=0;
	for(int i=1;i<=sqrt(ant);i++){
		if(ant%i==0){
			cont++;
			if (i != ant / i) {
				cont++;
			}
		}
	}
	return cont;
}
int main(){
	int n;
	long long ant;
	scanf("%d %lld",&n,&ant);
	for(int i=1;i<n;i++){
		long long aux,menor,mayor;
		scanf("%lld",&aux);
		menor=(aux<ant)?aux:ant;
		mayor=(aux>ant)?aux:ant;
		ant=mcd(menor,mayor);
	}
	printf("%lld\n",div(ant));
	return 0;
}
