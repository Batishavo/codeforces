#include<cstdio>
#include<algorithm>
using namespace std;
int n;
int chico,grande;
int cant(int m){
//	printf("%d\n",m);
	if(n>m){
		return n-m;
	}
	if(m==n){
		return 0;
	}	
	if(m%2==0){
		return  cant(m/2)+1;	
	}
	else
		return (cant(m+1))+1;	
	}
int main(){
	int m;
	scanf("%d %d",&n,&m);
	int x=cant(m);
	printf("%d\n",x);
	return 0;
}
