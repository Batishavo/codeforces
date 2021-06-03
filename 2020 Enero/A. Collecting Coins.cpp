#include<cstdio>
int main(){
	int q;
	scanf("%d",&q);
	while(q--){
		int a,b,c,d;
		scanf("%d %d %d %d",&a,&b,&c,&d);
		int aux=(a>b)?a:b;
		int mayor=(aux>c)?aux:c;
		int cant=mayor-a+mayor-b+mayor-c;
		if(d>cant && (d-cant)%3==0){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
		
	}
	
	return 0;
}
