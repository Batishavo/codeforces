#include<cstdio>
int n;
int cubeta[200000],tmp;
int main(){
	scanf("%d",&n);
	int l,r;
	for(int i=0;i<n;i++){
		scanf("%d %d",&l,&r);
		for(int j=l;j<=r;j++){
			cubeta[j]=tmp;
		}
		tmp++;
	}
	//cubeta[r]=tmp;
	/*for(int i=1;i<=r;i++){
		printf("%d ",cubeta[i]);
	}*/
	int act;
	scanf("%d",&act);
	printf("%d\n",n-cubeta[act]);
	return 0;
}
