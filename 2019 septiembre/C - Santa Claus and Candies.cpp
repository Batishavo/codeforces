#include<cstdio>
int n;
int cant(int sum,int pos){
//	printf("%d %d\n",sum,n);
	if(sum>=n){
		return 0;
	}
	return cant(sum+pos+1,pos+1)+1;
}
int main(){
	int flag=0;
	scanf("%d",&n);
	int x=cant(0,0);
	int tmp=((x)*(x+1))/2;
	int salida=(tmp==n)?x:x-1;
	printf("%d\n",salida);
	for(int i=1;i<=x;i++){
		if(tmp-i==n){
			flag=i;
			break;
		}
	}
	for(int i=1;i<=x;i++){
		if(flag!=i){
			printf("%d ",i);
		}
	}
	return 0;
}
