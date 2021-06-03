#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
const int lim=1005;
string cad;
int n,flag=1;
struct par{
	int x;
	int y;
	par(){
		x=0;
		y=0;
	}
	par(int x1,int y1){
		x=x1;
		y=y1;
	}
};
bool can(par a, par b){
	if(a.x<b.x){
		return true;
	}
	else if(a.x==b.x){
		return a.y<b.y;
	}
	return false;
}
par parejas[lim];
int main(){
	int q;
	scanf("%d",&q);
	while(q--){
		cad="";
		n;flag=1;
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			int x,y;
			scanf("%d %d",&x,&y);
			parejas[i].x=x;
			parejas[i].y=y;
		}
		parejas[n].x=0;
		parejas[n].y=0;
		sort(parejas,parejas+n+1,can);
		int tmp=parejas[0].x;
	//	printf("____\n");
		/*for(int i=0;i<=n;i++){
			printf("%d %d\n",parejas[i].x,parejas[i].y);
		}*/
		for(int i=1;i<=n;i++){
			if(parejas[i].x!=tmp){
				tmp=parejas[i].x;
				if(parejas[i-1].y>parejas[i].y){
					flag=0;
					break;		
				}
				for(int j=0;j<parejas[i].x-parejas[i-1].x;j++){
					cad+="R";
				}
			}
			int aux=parejas[i].y-parejas[i-1].y;
			for(int j=0;j<aux;j++){
				cad+="U";
			}
		//	cout<<cad+" "<<parejas[i].x<<" "<<parejas[i].y<<endl;
		}
		if(flag==1){
			cout<<"YES"<<endl<<cad<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
}
