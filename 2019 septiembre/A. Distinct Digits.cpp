#include<cstdio>
int n,m;
int bucket[15];
void clear(){
	for(int i=0;i<12;i++){
		bucket[i]=0;
	}
}
bool can(int i){
	while(i>0){
		int tmp=i%10;
		bucket[tmp]++;
		if(bucket[tmp]>1){
			return false;
		}
		i/=10;
	}
	return true;
}
int main(){
	scanf("%d %d",&n,&m);
	int salida=-1;

	for(int i=n;i<=m;i++){
		if(can(i)){
			salida=i;
			break;
		}
		clear();
	}
	printf("%d\n",salida);
	return 0;	
}
