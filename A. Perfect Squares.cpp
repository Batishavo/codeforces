#include<cstdio>
#include<math.h>
int n,arr[1005],tmp[1000];
void Merge(int begin,int midle,int end){
	for(int i=begin;i<=end;i++){
		tmp[i]=arr[i];
	}
	int i=begin,j=midle+1,ith=begin;
	while(i<=midle && j<=end){
		if(tmp[i]<tmp[j]){
			arr[ith++]=tmp[i++];
		}
		else{
			arr[ith++]=tmp[j++];
		}
	}
	while(i<=midle ){
		arr[ith++]=tmp[i++];
	}
	while(j<=end){
		arr[ith++]=tmp[j++];
	}
	
}
void Merge_Sort(int begin,int end){
	if(begin==end){
		return;
	}
	int midle=(begin+end)/2;
	Merge_Sort(begin,midle);
	Merge_Sort(midle+1,end);
	Merge(begin,midle,end);
}
int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	Merge_Sort(0,n-1);
	for(int i=n-1;i>=0;i--){
		int num=sqrt(arr[i]);
		if(num*num!=arr[i]){
			printf("%d",arr[i]);
			break;
		}
		
	}
	
}
