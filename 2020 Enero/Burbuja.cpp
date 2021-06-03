#include<cstdio>
void burbuja(int n,int arr[]){
	for(int i=1;i<n;i++){
		for(int j=0;j<n-i;j++){
			if(arr[j]>arr[j+1]){
				int tmp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=tmp;
			}
		}
	}	
}
int main(){
	int n;
	scanf("%d",&n);
	int arr[n+5];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	burbuja(n,arr);
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}

