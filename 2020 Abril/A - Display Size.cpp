#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	int a=n,b=1;
	for(int i=sqrt(n);i>=2;i--){
		if(a%i==0 && (a/i>=b*i)){
			
			a/=i;
			b*=i;
			//i=2;
		//	printf("%d %d %d\n",i,a,b);
			//i=2;
		}
	}
	
	printf("%d %d\n",b,a);
	return 0;
}
