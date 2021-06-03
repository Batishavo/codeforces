#include<algorithm>
#include<cstdio>
const int lim=1e5;
using namespace std;
int n,m;
int boys[lim],girls[lim];
int memoi[lim],memoj[lim];
int cant(int i,int j){
	if(j>=m){
		return 0;
	}
	if(i>=n){
		return cant(0,j+1);
	}
	if((abs(boys[i]-girls[j])==0 ||
	   abs(boys[i]-girls[j])==1) &&
	   memoi[i]==0 && memoj[j]==0
	   ){
		memoi[i]=1;
		memoj[j]=1;	
		return cant(i+1,j+1)+1;   	
	}
	return cant(i+1,j);
}
int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&boys[i]);
	}
	scanf("%d",&m);
	for(int i=0;i<m;i++){
		scanf("%d",&girls[i]);
	}	
	sort(boys,boys+n);
	sort(girls,girls+m);
	printf("%d",cant(0,0));
	return 0;
}
