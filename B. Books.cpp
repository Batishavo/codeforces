#include<cstdio>
const int lim=1e6;
int n;
long long arr[lim],sum,mayor,m;
int bynari(int ini,int fin){
	int pos=ini-1;
	while(ini<fin){
		int mid=((ini+fin)/2)+1;
		if(arr[mid]-arr[pos]>m){
			fin=mid-1;
		}
		else{
			ini=mid;
		}	
		//printf("%d %d\n",arr[mid]-arr[pos],mid);
	}
	return ini+1;
}
int main(){
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++){
		int aux;
		scanf("%d",&aux);
		sum+=aux;
		arr[i]=sum;
	}
	if(n==1 && sum<m){
		printf("%d",1);
		return 0;
	}
	else if(n==1){
		printf("0");
		return 0;
	}
	for(int i=0;i<n;i++){
		//printf("___________\n");
		long long temp=bynari(i,n);
		if(temp-i>mayor)
		{
			if(temp-i==1){
				printf("%d %d %d\n",arr[temp+i],arr[i],i);
				if(arr[i+temp]-arr[i]<=m)
					mayor=temp-i;
			}
			else{
				mayor=temp-i;
			}
		}
	}
	printf("%lld\n",mayor);
	return 0;
}
