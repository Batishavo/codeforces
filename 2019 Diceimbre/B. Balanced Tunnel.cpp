#include<cstdio>
const int lim=2e5;
int n;
int arr1[lim+10];
int arr2[lim+10];
int mark[lim+10];
int main(){
	int p1=0,p2=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&arr1[i]);
	}
	for(int i=0;i<n;i++){
		scanf("%d",&arr2[i]);
	}
	int cont=0;
	while(p1<n && p2<n){
		if(mark[p1]!=0){
		//	printf("x\n");
			p1++;
		}
		else if(arr1[p1]==arr2[p2]){
		//	printf("y\n");
			p1++;
			mark[arr2[p2++]]=1;
		}
		else {
		//	printf("z\n");
			cont++;
			mark[arr2[p2++]]=1;
		}
	}
	printf("%d\n",cont);
	return 0;
}
