#include<cstdio>
int arr[200];
int p[200];
bool burbuja(int n){
	for(int j=1;j<n;j++){
		for(int i=1;i<n;i++){
			if(arr[i]>arr[i+1] && p[i]==1){
				int tmp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=tmp;
			}
		}	
	}
	for(int i=1;i<n;i++){
	//	printf("%d ",arr[i]);
		if(arr[i]>arr[i+1]){
		//	printf("%d\n",arr[i+1]);
			return false;
		}
	}
	return true;
	
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		for(int i=0;i<=100;i++){
			arr[i]=0;
			p[i]=0;
		}
		int n,m;
		scanf("%d %d",&n,&m);
		for(int i=1;i<=n;i++){
			scanf("%d",&arr[i]);
		}
		for(int i=0;i<m;i++){
			int tmp;
			scanf("%d",&tmp);
			p[tmp]=1;
		}
		printf(burbuja(n)?"YES\n":"NO\n");
		
	}
	
	return 0;
}
