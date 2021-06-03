#include<cstdio>
bool can(int s,int i,int p,int mid){
	int val1=p-mid+1;
	int val2=mid-1;
	return s+val1>i+val2;
}
int binary(int s,int i,int p){
	int ini=0,fin=p+1;
	while(ini<fin){
		int mid=((ini+fin)/2)+1;
		if(can(s,i,p,mid)){
			ini=mid;
		}
		else{
			 fin=mid-1;
		}
	}
	return ini;
}
int main(){
	int q;
	scanf("%d",&q);
	while(q--){
		int s,i,p;
		scanf("%d %d %d",&s,&i,&p);
		printf("%d\n",binary(s,i,p));
	}
	
	return 0;
}
