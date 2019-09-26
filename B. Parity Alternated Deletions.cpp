#include<cstdio>
#include<vector>
#include<algorithm>
#include<stdlib.h>
using namespace std;
vector <int> odd;
vector <int> even;
long long sum=0;
int main(){
	int n;
	printf("%d %d\n",odd.size(),even.size());
	scanf("%d",&n);
	while (n--){
		int aux;
		scanf("%d",&aux);
		if(aux%2!=0){
			odd.push_back(aux);
		}
		else{
			even.push_back(aux);
		}
	}
	sort(odd.begin(),odd.end());
	sort(even.begin(),even.end());
	int cant_odd=odd.size(),cant_even=even.size();
	int num=abs(cant_odd-cant_even);
	//printf("%d\n",num);
	for(int i=0;i<num-1;i++){
		if(cant_odd>cant_even){
		//	printf("y");
			sum+=odd[i];	
		}
		else{
		//	printf("x");
			sum+=even[i];
		}	
	}
	printf("%d\n",sum);
	return 0;
}
