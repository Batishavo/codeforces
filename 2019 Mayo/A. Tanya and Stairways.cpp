#include<cstdio>
int n;
int arr[1005];
int main(){
	scanf("%d",&n);
	int tmp=0,pos=0;
	for(int i=0;i<n;i++){
		int aux;
		scanf("%d",&aux);
		if(aux<=tmp){
			pos++;
		}
		arr[pos]++;
		tmp=aux;
	}
	pos++;
	printf("%d\n",pos);
	for(int i=0;i<pos;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
