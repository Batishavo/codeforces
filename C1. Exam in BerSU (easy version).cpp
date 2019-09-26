#include<cstdio>
#include<algorithm>
using namespace std;
int bucket[200],exi[200];
long long sum;
int n,m;
int bynary_search(int cant,int valor,int temp){
	int ini=0;
	while(ini<cant){
		int mid=((ini+cant)/2)+1;
	//	printf("%d %d %d\n",mid,temp-(mid*valor),cant);
		if(temp-(mid*valor)<=m){
			cant=mid-1;
		}
		else{
			ini=mid;
		}
	//	printf("%d %d %d\n",mid,temp-(mid*valor),cant);
	}
	return ini+1;
}
int main(){
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++){
		int aux;
		scanf("%d",&aux);
		sum+=aux;
		if(sum>m){
			long long temp=sum;
			int cont=0;
			for(int j=100;j>=0;j--){
				if(temp-(j*bucket[j])==m){
					cont+=bucket[j];
					printf("%d %d\n",j,aux);
					break;
				}
				else if(temp-(j*bucket[j])<m){
	//				printf("________\n");
	//				printf("xx%d %d %d %d\n",temp,temp,j,bucket[j]);
					cont+=bynary_search(bucket[j],j,temp);
	//				printf("_______%d\n",bynary_search(bucket[j],j,temp));
					break;
				}
				else{
				//	printf("%d\n",j);
					temp-=j*bucket[j];
					cont+=bucket[j];
				}
			}
			exi[i]=cont;
		}
		bucket[aux]++;
	}
	for(int i=0;i<n;i++){
		printf("%d ",exi[i]);
	}
	return 0;
}
