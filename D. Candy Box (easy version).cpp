#include<cstdio>
#include<map>
using namespace std;
map<int,int>mymap;
const int lim=2e5;
int main(){
	int q;
	scanf("%d",&q);
	while(q--){
		bool bucket[lim]={0};
		long long sum=0;
		int n;
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			int aux;
			scanf("%d",&aux);
			mymap[aux]++;
		}
		for (std::map<int,int>::iterator it=mymap.begin(); it!=mymap.end(); it++){
			for(int i=it->second;i>0;i--){
				if(bucket[i]==0){
				//	printf("%d %d %d\n",it->first,sum,i);
					bucket[i]=1;
					sum+=i;
					break;
				}
			}
		}
		printf("%lld\n",sum);
		mymap.clear();
	}
	return 0;
}
