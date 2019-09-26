#include<cstdio>
#include<string.h>
int bucket[10];
const int lim=1e6;
char order[lim+10];
void mark(int n){
	for(int i=0;i<n;i++){
		if(order[i]=='L'){
			for(int j=0;j<=9;j++){
				if(bucket[j]==0){
					bucket[j]=1;
					break;
				}
			}
		}
		else if(order[i]=='R'){
			for(int j=9;j>=0;j--){
				if(bucket[j]==0){
					bucket[j]=1;
					break;
				}
			}
		}
		else{
			bucket[order[i]-'0']=0;
		}
		
	}
}
int main(){
	int n;
	scanf("%d %s",&n,order);
	mark(n);
	for(int i=0;i<=9;i++){
		printf("%d",bucket[i]);
	}
	return 0;
}
