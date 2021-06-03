#include<cstdio>
int bynari(int n,int m,int xp){
	int ini=0,fin=xp+1;
	while(ini<fin){
		int mid=((ini+fin)/2);
		if(n+mid<(m+(xp-mid))){
			ini=mid+1;
		}
		else{
			fin=mid;
		}
	}
	return ini;
}
int main(){
	int test;
	scanf("%d",&test);
	while(test--){
		int n,m,xp;
		scanf("%d %d %d",&n,&m,&xp);
		int tmp=bynari(n,m,xp);
		int resultado=xp-tmp;
		
			printf("%d\n",tmp);	
	}
	return 0;
}
