#include<cstdio>
const int lim=1e6;
int arr[lim];
bool rigth(int pos,int n){
	for(int i=pos+1;i<n;i++){
		if(arr[i-1]!=arr[i]-1)
			return false;
	}
	for(int i=1;i<=pos-1;i++){
		if(arr[i]-1!=arr[i-1])
			return false;
	}
	return true;
}
bool left(int pos,int n){
	for(int i=pos-1;i>0;i--){
		if(arr[i-1]-1!=arr[i])
			return false;
	}
	for(int i=n-1;i>pos+1;i--){
		if(arr[i-1]-1!=arr[i])
			return false;
	}
	return true;
}
bool can(int n,int pos){
	if((pos+1<n && arr[pos+1]==2)||((pos==n-1 && arr[0]==2))){
		return rigth(pos,n);
	}
	else if((pos-1>=0 && arr[pos-1]==2)||(pos==0 && arr[n-1]==2)){
		//printf("XXXXXXX");
		return left(pos,n);
	}
	else if(pos==0 && arr[0]==1 && n==1){
		return true;
	}
	else{
		return false;
	}
}
int main(){
	int q;
	scanf("%d",&q);
	while(q--){
		int n,pos;
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%d",&arr[i]);
			if(arr[i]==1){
				pos=i;
			}	
		}
		if(can(n,pos)){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}
