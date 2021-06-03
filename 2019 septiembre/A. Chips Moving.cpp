#include<cstdio>
int odd,none,n;
int main(){
	scanf("%d",&n);
	while(n--){
		int aux;
		scanf("%d",&aux);
		if(aux%2==0){
			odd++;
		}
		else{
			none++;
		}
	}
	printf("%d\n",(none<odd)?none:odd);
	return 0;
}
