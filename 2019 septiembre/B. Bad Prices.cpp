#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
const int lim=150005;
int arr[lim];
int temp[lim];
int vinary(int num,int fin){
	int ini=0;
	while(ini<fin){
		int mid=((ini+fin)/2)+1;
	//	printf("%d\n",mid);
		if(temp[mid]>num){
			fin=mid-1;
		}
		else{
			ini=mid;
		}
	}
	return ini;
}
int main(){
	int queris;
	scanf("%d",&queris);
	for(int k=0;k<queris;k++){
		int n,cant=0;
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%d",&arr[i]);
			temp[i]=arr[i];
		}
		sort(temp,temp+n);
		int fin=n-1;
		for(int i=n-1;i>0;i--){
			if(fin<=0){
				break;
			}
			int pos=vinary(arr[i],fin);
			if(pos<fin){
				cant+=fin-pos;
				fin-=(fin-pos);
			}
			fin--;
			//printf("");
		}
		printf("%d\n",cant);
	}
	return 0;
}
