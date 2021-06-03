#include<bits/stdc++.h>
using namespace std;
int main(){
	int q;
	scanf("%d",&q);
	while(q--){
		int dragon,n,m;	
		scanf("%d %d %d",&dragon,&n,&m);
		int flag=0;
		while(dragon>0){
			int tmp1=(dragon/2)+10;
			int tmp2=dragon-10;
			if(n==0 && m==0){
				flag=1;
				break;
			}
			else if(n==0){
				m--;
				dragon-=10;
			}
			else if(m==0){
				n--;
				dragon/=2;
				dragon+=10;
			}
			else if(tmp1<=dragon){
				n--;
				dragon=tmp1;
			}
			else{
				m--;
				dragon=tmp2;
			}
		//	printf("%d %d %d\n",dragon,n,m);
			
		}
		if(flag==0){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
