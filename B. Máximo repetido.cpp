#include<bits/stdc++.h>
#define s scanf
#define f(n) for(int i=0;i<n;i++) 
using namespace std;
bool myfn(int i, int j) { return i<j; }
int main(){
	int n,max,arr[200];
	s("%d",&n);
	f(n){
		s("%d",&arr[i]);
	}
	cout<<*max_element(arr,arr+n);
//	printf("%d",count(arr,arr+n,max));
	return 0;
}
