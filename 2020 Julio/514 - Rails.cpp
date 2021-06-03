#include<bits/stdc++.h>
using namespace std;
const int lim =1e5;
int main(){
	int n;
	int arr[lim];
	stack <int> myStack;
	while(scanf("%d",&n)){
		if(n==0){
			break;
		}
		int flag=1;
		while(flag){
			for(int i=0;i<n;i++){
				scanf("%d",&arr[i]);
				if(arr[i]==0){
					flag=0;
					break;
				}
			}
			if(flag==0){
				break;
			}	
			int pos=0;
			for(int i=1;i<=n;i++){
				while(!myStack.empty() && myStack.top()==arr[pos]){
					pos++;
					myStack.pop();
				}	
				if(arr[pos]==i){
					pos++;
				}
				else{
					myStack.push(i);	
				}
			}
			while(!myStack.empty() && myStack.top()==arr[pos]){
				pos++;
				myStack.pop();
			}
			if(myStack.empty() && pos==n){
				printf("Yes\n");
			}
			else{
				printf("No\n");
			}
			while(!myStack.empty()){
				myStack.pop();
			}
		}
		printf("\n");
		
	}
	
	return 0;
}
