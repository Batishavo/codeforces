#include<cstdio>
const int lim=1e6;
int arr[lim],temp[lim];
int n;
void mergue(int ini,int mid,int fin){
	for(int i=ini;i<=fin;i++){
		temp[i]=arr[i];
	}
	int i=ini,pos=ini,j=mid+1;
	while(i<=mid && j<=fin){
		if(temp[i]<temp[j]){
			arr[pos++]=temp[i++];
		}
		else{
			arr[pos++]=temp[j++];
		}
	}
	while(i<=mid ){
		arr[pos++]=temp[i++];
	}
	while(j<=fin){
		arr[pos++]=temp[j++];
	}
}
void mergue_sort(int ini,int fin){
	if(ini==fin){
		return;
	}
	int mid=(ini+fin)/2;
	mergue_sort(ini,mid);
	mergue_sort(mid+1,fin);
	mergue(ini,mid,fin);
}
int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	mergue_sort(0,n-1);
	if(arr[n-2]+arr[n-3]<=arr[n-1]){
		printf("NO\n");
	}
	else{
		int aux=arr[n-1];
		arr[n-1]=arr[n-2];
		arr[n-2]=aux;
		printf("YES\n");
		for(int i=0;i<n;i++){
			printf("%d ",arr[i]);
		}
	}
	return 0;
}
