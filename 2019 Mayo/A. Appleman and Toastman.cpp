#include<cstdio>
const int lim=1e6;
int n,arr[lim],temp[lim];
long long sum[lim],salida=0;
void merge(int ini,int mid,int fin){
	for(int i=ini;i<=fin;i++){
		temp[i]=arr[i];
	}
	int i=ini,j=mid+1,pos=ini;
	while(i<=mid && j<=fin){
		if(temp[i]<temp[j]){
			arr[pos++]=temp[i++];
		}
		else{
			arr[pos++]=temp[j++];
		}
	}
	while(i<=mid){
		arr[pos++]=temp[i++];
	}
	while(j<=fin){	
		arr[pos++]=temp[j++];
	}
}
void merge_sort(int ini,int fin){
	if(ini == fin){
		return;
	}
	int mid=(ini+fin)/2;
	merge_sort(ini,mid);
	merge_sort(mid+1,fin);
	merge(ini,mid,fin);
}
int main(){
	scanf("%d",&n);
	long long total=0;
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	merge_sort(0,n-1);
	for(int i=0;i<n;i++){
		total+=arr[i];
		sum[i]=total;
	}
	salida=total;
	for(int i=1;i<n;i++){
		salida+=total-sum[i-2];
	}
	printf("%d\n",salida);
}
