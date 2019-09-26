#include<cstdio>
#include<algorithm>
using namespace std;
int bucket[2000];
int arr[2000];
int main(){
	int n,m,cant;
	scanf("%d %d",&n,&m);
	cant=(n%2==0)?n/2:(n/2)+1;
	cant*=2;
	for(int i=0;i<n;i++){
		int aux;
		scanf("%d",&aux);
		bucket[aux]++;
	}
	int pos=0;
	for(int i=0;i<=m;i++){
		if(bucket[i]>0){
			arr[pos++]=bucket[i];
		}
	}
	int cont=0;
	sort(arr,arr+pos);
	for(int i=pos-1;i>=0;i--){
		if(cant==0){
			break;
		}
		if(arr[i]%2==0){
			if(arr[i]>cant){
				cont+=cant;
				cant=0;	
				break;
			}
			else{
				cont+=arr[i];
				cant-=arr[i];
				arr[i]=0;
			}
		}
		else{
			if(arr[i]-1>cant){
				cont+=cant;
				cant=0;	
				break;
			}
			else{
				cont+=arr[i]-1;
				cant-=arr[i]-1;
				arr[i]=1;
			}
		}
	}
	sort(arr,arr+pos);
	for(int i=pos-1;i>=0;i--){
		if(arr[i]==0 || cant==0){
			break;
		}
		else{
			cont++;
			cant-=2;
		}
	}
	printf("%d\n",cont);
}
