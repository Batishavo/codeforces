#include<cstdio>
#include<map>
#include<algorithm>
#include<vector>
using namespace std;
const int lim=3e6;
map <int,vector<int> >MyMap;
int arr[lim],l_r[lim][3],aux[lim][3],total[lim];
int salida[lim],bucket[lim];
int n,m,mayor;
int main(){
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<m;i++){
		scanf("%d %d",&l_r[i][0],&l_r[i][1]);
		aux[l_r[i][0]-1][0]++;
		aux[l_r[i][1]-1][1]--;
	}
	sort(arr,arr+n);
	int cont=0;
	for(int i=0;i<n;i++){
		cont+=aux[i][0];
		total[i]=cont;
		cont+=aux[i][1];
	}
	for(int i=0;i<n;i++){
		mayor=(total[i]>mayor)?total[i]:mayor;
		MyMap[total[i]].push_back(i);
	}
	int pos=n-1;
	for(int i=mayor;i>=0;i--){
		while(!MyMap[i].empty()){
			salida[MyMap[i].back()]=arr[pos--];
			MyMap[i].pop_back();
		}
	}
	long long sum=0;
	for(int i=0;i<n;i++){
		sum+=salida[i];
		bucket[i]+=sum;
	}
	/*if(n==200000){
		printf("%lld\n",sum);
	}*/
	long long cant=0;
	for(int i=0;i<m;i++){
		if(l_r[i][0]-2>=0){
			cant+=bucket[l_r[i][1]-1];	
			cant-=bucket[l_r[i][0]-2];
		}
		else{
			cant+=bucket[l_r[i][1]-1];
		}
	}
	printf("%lld\n",cant);
	return 0;
}
