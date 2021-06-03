#include<bits/stdc++.h>
using namespace std;
const int lim=2e6;
int arr[lim];
int main(){
	int q;
	scanf("%d",&q);
	while(q--){
		int n;	
		scanf("%d",&n);
		int p1=0,p2=n-1;
		vector<int>nums;
		nums.push_back(0);
		for(int i=0;i<n;i++){
			scanf("%d",&arr[i]);
		}
		while(p1<=p2){
			int a=arr[p1];
			int b=arr[p2];
			int c=nums.back();
			if(a<=b && a>=c){
				nums.push_back(a);
				p1++;
			}
			else if(b<=a && b>=c){
				nums.push_back(b);
				p2--;
			}
			else if(a>=c || b>=c){
				if(a<c){
					nums.push_back(b);
					p2--;
				}
				else{
					nums.push_back(a);
					p1++;
				}
			}
			else{
				break;
			}
		}
		/*for(auto x:nums){
			printf("%d\n",x);
		}*/
		printf("%d\n",n-nums.size()+1);
	}
	return 0;
}
