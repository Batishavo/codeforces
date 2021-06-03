#include<cstdio>
int bucket[200],n,m;
bool can(){
	for(int i=1;i<=m;i++){
		if(bucket[i]==0)
			return false;
	}
	return true;
}
int main(){
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++){
		int aux;
		scanf("%d",&aux);
		for(int j=0;j<aux;j++){
			int tmp;
			scanf("%d",&tmp);
			bucket[tmp]=1;
		}
	}
	if(can()){
		printf("YES\n");
	}
	else{
		printf("NO\n");	
	}
	return 0;
}
