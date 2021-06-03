#include<cstdio>
const int lim=1e6;
int odd[lim],even[lim],arr[lim];
int n;
int times(){
	int cant=0;
	for(int i=1;i<=n;i++){
		int sum_odd=0,sum_even=0;
		if(i%2!=0){
			sum_odd=odd[i]+even[n]-even[i];
			sum_even=even[i]-arr[i]+odd[n]-odd[i];
		}
		else{
			sum_odd=odd[i]-arr[i]+even[n]-even[i];
			sum_even=even[i]+odd[n]-odd[i];	
		}
	///	printf("%d %d %d\n",sum_odd,sum_even,i);
		cant+=(sum_odd==sum_even)?1:0;
	}
	return cant;
}
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&arr[i]);
		odd[i]=odd[i-1];
		even[i]=even[i-1];
		if(i%2==0){
			odd[i]+=arr[i];
		}
		else{
			even[i]+=arr[i];
		}
		
	}
	printf("%d\n",times());
	return 0;
}
