#include<cstdio>
#include<algorithm>
using namespace std;
const int lim=1e6;
int arr[lim],temp[lim];
bool can(int n){
	int pos=0;
	for(int i=0;i<n;i++){
		if(temp[i]==arr[n-1]){
			pos=i;
		}
	}
	int ini=n-2;
	int l=pos-1,r=pos+1;
	while(l>=0 && r<n){
		if(arr[ini]==temp[l]){
			ini--;
			l--;
		}
		else if(arr[ini]==temp[r]){
			ini--;
			r++;
		}
		else{
			return false;
		}
	}
	while(r<n){
		 if(arr[ini]==temp[r]){
			ini--;
			r++;
		}
		else{
			return false;
		}
	}
	while(l>=0){
		if(arr[ini]==temp[l]){
			ini--;
			l--;
		}
		else{
			return false;
		}
	}
	return true;
}
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
		temp[i]=arr[i];
	}
	sort(arr,arr+n);
	if(can(n)){
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}
	return 0;
}
