#include<cstdio>
#include<algorithm>
using namespace std;
const int lim=1e4;
int n;
struct cosa{
	int val;
	int pos;
	cosa(){
		val=0;
		pos=0;
	}
	cosa(int num1,int num2){
		val=num1;
		pos=num2;
	}
};
bool cond(cosa a,cosa b){
	return a.val<b.val;
}
cosa arr[lim];
int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int tmp;
		scanf("%d",&tmp);
		arr[i]=cosa(tmp,i+1);
	}
	sort(arr,arr+n,cond);
	int cant=1,pos=1;
	for(int i=n-2;i>=0;i--){
		cant+=(arr[i].val*pos)+1;
		pos++;
	}
	printf("%d\n",cant);
	for(int i=n-1;i>=0;i--){
		printf("%d ",arr[i].pos);
	}
	return 0;
}
