#include<cstdio>
const int lim= 1e7;
int n,mayor=25;
int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int aux;
		scanf("%d",&aux);
		mayor=(aux>mayor)?aux:mayor;
	}
	printf("%d\n",mayor-25);
	return 0;
}
