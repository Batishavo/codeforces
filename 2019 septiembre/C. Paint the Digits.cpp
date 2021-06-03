#include<cstdio>
#include<algorithm>
using namespace std;
const int lim=3e5;
int t,n;
char arr[lim],temp[lim];
int imp[lim];
int main(){
	scanf("%d",&t);
	while(t--){
		int flag=1;
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf(" %c",&arr[i]);
			temp[i]=arr[i];
		}
		sort(temp,temp+n);
		int pos=n-1;
		for(int i=n-1;i>=0;i--){
			if(pos>=0 && arr[i]==temp[pos]){
				imp[i]=2;
				pos--;
			}
			else{
				imp[i]=1;
			}
		}
		int ant=-1;
		for(int i=0;i<n;i++){
			if(imp[i]==1){
				if(arr[i]<ant){
					flag=0;
				}
				ant=arr[i];
			}
		}
		if(flag==1){
			for(int i=0;i<n;i++){
				printf("%d",imp[i]);
			}	
			printf("\n");
		}
		else{
			printf("-\n");
		}
	}
	return 0;
}
