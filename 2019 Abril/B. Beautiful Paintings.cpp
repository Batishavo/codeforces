#include<cstdio>
int n,cant=0;
int arr[2000],tmp[2000],aux[2000];
bool can(int lon){
	for(int i=1;i<lon;i++){
		if(arr[i]!=arr[i-1]){
		//	printf("%d %d --%d %d\n",arr[i],i,arr[i-1],i-1);
			return true;	
		}
	}
	return false;
}
void merge(int ini,int mid,int fin){
	for(int i=ini;i<=fin;i++){
		tmp[i]=arr[i];
	}
	int i=ini,j=mid+1,pos=ini;
	while(i<=mid && j<=fin){
		if(tmp[i]<tmp[j]){
			arr[pos++]=tmp[i++];
		}
		else{
			arr[pos++]=tmp[j++];
		}
	}
	while(i<=mid ){
		arr[pos++]=tmp[i++];
	}	
	while(j<=fin){
		arr[pos++]=tmp[j++];
	}
}
void mergesort(int ini,int fin){
	if(ini==fin){
		return;
	}
	int mid=((ini+fin)/2);
	mergesort(ini,mid);
	mergesort(mid+1,fin);
	merge(ini,mid,fin);
}
int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int lon=n;
	mergesort(0,lon-1);
	while(can(lon)){
		int repe=0;
	//	printf("kha?");
		for(int i=1;i<lon;i++){
			if(arr[i]==arr[i-1]){
				aux[repe++]=arr[i];
			}
			else{
				cant++;
			}
		}
		lon=repe;
		for(int i=0;i<repe;i++){
			arr[i]=aux[i];
		}
	}
	printf("%d\n",cant);
	return 0;
}
