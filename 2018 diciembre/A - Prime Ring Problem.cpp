#include<cstdio>
int primos[500],n,cont;
void criva(){
    primos[0]=1;
    primos[1]=1;
    for(int i=2;i<50;i++){
        if(primos[i]==0){
            for(int j=i+i;j<50;j+=i){
                primos[j]=1;
            }
        }
    }
}
int mark[50],memo[50];
void imprime(int num,int p){
    if(p>=n){
    	if(primos[memo[0]+memo[n-1]]==0){
    		for(int i=0;i<n;i++){
    			printf("%d ",memo[i]);
			}
			printf("\n");
		}
    	return;
	}
	if(mark[2]==1 && mark[4]==1 &&  mark[6]==1 && mark[10]==1 &&  mark[12]==1 && n>=12){
		return;
	}
	for(int i=2;i<=n;i++){
    	if(primos[i+num]==0 && mark[i]==0){
    		mark[i]=1;
    		memo[p]=i;
    		imprime(i,p+1);
			mark[i]=0;
		}
	}
}
int main(){
    criva();
    memo[0]=1;
    while(scanf("%d",&n)){
        if(cont>0)
            printf("\n");
        printf("Case %d:\n",++cont);
        imprime(1,1);
    }
    return 0;
}
