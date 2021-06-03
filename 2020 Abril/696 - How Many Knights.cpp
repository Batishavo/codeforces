#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	while(true){
		scanf("%d %d",&n,&m);
		if(n==0 && m==0){
			break;
		}
		int result=0;
		if(n==1 || m==1){
			result=n*m;
		}
		else if(n==0 || m==0){
			result=0;
		}
		else if(n==2 || m==2){
			if(n==2 && m==2){
				result=4;
			}
			else{
				int dif=max(n,m);
				int cont=0;
				for(int i=0;i<dif;i++){
					if(i%4==0){
						cont+=2;
					}
					if(i%4==1){
						cont+=2;
					}
				}		
				result=cont;
			}
			
		}
		else{
			int mayor=max(n,m);
			int menor=min(n,m);
			int sum=menor/2;
			int tmp=(menor%2==0)?0:1;
			int cont=0;
			for(int i=0;i<mayor;i++){
				cont+=sum;
				if(i%2==0){
					cont+=tmp;
				}
			}
			result=cont;
		}
		printf("%d knights may be placed on a %d row %d column board.\n",result,n,m);
	}
	
	return 0;
}
