#include<cstdio>
const int lim=1e6;
int n;
int arr[lim],temp[lim],increasing[lim],decreasing[lim];
void merge(int ini,int fin,int vec[],int mid){
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
	while(i<=mid){
		arr[pos++]=temp[i++];	
	}
	while(j<=fin){
		arr[pos++]=temp[j++];
	}
}
void merge_sort(int vec[],int ini,int fin){
	if(ini==fin){
		return;
	}
	int mid=(ini+fin)/2;
	merge_sort(vec,ini,mid);
	merge_sort(vec,mid+1,fin);
	merge(ini,fin,vec,mid);
}
int cont=0,pos_i=1,pos_d=0;
bool can(){
	increasing[0]=arr[0];
	for(int i=1;i<n;i++){
		if(arr[i]==arr[i-1]){
			cont++;
			decreasing[pos_d++]=arr[i];
		}
		else{
			increasing[pos_i++]=arr[i];
			cont=0;
		}
		if(cont>1){
			return false;
		}
	}
	return true;
}
int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	merge_sort(arr,0,n-1);
	if(can()){
		printf("YES\n%d\n",pos_i);
		for(int i=0;i<pos_i;i++){
			printf("%d ",increasing[i]);;
		}
		printf("\n%d\n",pos_d);
		for(int i=pos_d-1;i>=0;i--){
			printf("%d ",decreasing[i]);
		}
		printf("\n");
	}
	else{
		printf("NO\n");
	}
	return 0;
}
