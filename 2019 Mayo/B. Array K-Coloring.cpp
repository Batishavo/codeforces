#include<cstdio>
const int lim=1e6;
int aux[lim],cubeta[lim],arr[lim];
int n,m,mayor,sum=0,esp;
void can(){
	int temporal=m;
	while(temporal>0){
		temporal-=cubeta[sum];
		if(temporal<0){
			esp=sum;
		}
		sum++;
	}
	
}
int main(){
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++){
		int temp;
		scanf("%d",&temp);
		cubeta[temp]++;
		arr[i]=temp;
		if(cubeta[temp]>m){
			printf("NO\n");
			return 0;
		}
	}
	can();
	int mayor=m,otro=1;
	printf("YES\n");
	for(int i=0;i<n;i++){
		if(arr[i]>sum-1){
			aux[arr[i]]++;
			printf("%d ",aux[arr[i]]);	
		}
		else if(arr[i]==esp){
			printf("%d ",otro++);
		}
		else{
			printf("%d ",mayor--);
		}
	}	
	
	printf("\n");
	return 0;	
}
