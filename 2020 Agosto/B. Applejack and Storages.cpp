#include<bits/stdc++.h>
using namespace std;
const int lim=1e6;
int bucket[lim];
int four,two;
int main(){
	int tables,mayor=0;
	scanf("%d",&tables);
	while(tables--){
		int aux;
		cin>>aux;
		bucket[aux]++;
		mayor=max(mayor,bucket[aux]);
	}
	for(int i=0;i<=mayor;i++){
		if(bucket[i]!=0){
			four+=bucket[i]/4;
			if(bucket[i]%4>=2){
				two++;
			}
		}
	}
	int cases;
	scanf("%d",&cases);
	while(cases--){
		char sum;
		int aux;
		cin>>sum>>aux;
		if(sum=='+'){
			if(bucket[aux]%4==3){
				four++;
			}
			else if(bucket[aux]%2==1){
				two++;
			}
			bucket[aux]++;
		}
		else{
			if(bucket[aux]>=4 && bucket[aux]%4==0){
				four--;
				two++;
			}
			else if(bucket[aux]%4>=2){
				two--;
			}
			bucket[aux]--;
		}
		if(four>=2 || (four>=1 && two>=2) ){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}
