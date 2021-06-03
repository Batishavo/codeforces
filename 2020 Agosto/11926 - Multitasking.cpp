#include<bits/stdc++.h>
using namespace std;
const int lim=1000000;
int memo[lim+10];
int main(){
	int n,m;
	while(true){
		scanf("%d %d",&n,&m);
		if(n==0 && m==0){
			break;
		}
		int flag=0;
		for(int i=0;i<n;i++){
			int a,b;
			scanf("%d %d",&a,&b);
			if(flag==0){
				for(int j=a;j<b;j++){
					if(memo[j]==1){
						flag=1;
						break;
					}		
					memo[j]=1;
				}
			}
		}
		for(int i=0;i<m;i++){
			int a,b,c;
			scanf("%d %d %d",&a,&b,&c);
			if(flag==0){
				for(int j=a;j<=lim;j+=c){
					for(int m=j;m<j+b-a;m++){
						if(m>lim){
							break;
						}
						if(memo[m]==1){
							flag=1;
							break;
						}		
						memo[m]=1;
					}
				}
				
			}
		}
		if(flag==0){
			printf("NO CONFLICT\n");
		}
		else{
			printf("CONFLICT\n");
		}
		for(int i=0;i<=lim;i++){
			memo[i]=0;
		}
	}
	return 0;
}
