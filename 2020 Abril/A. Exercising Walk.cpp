#include<bits/stdc++.h>
using namespace std;
int main(){
	int q;
	scanf("%d",&q);
	while(q--){
		int a,b,c,d;
		int x,y,x1,x2,y1,y2;
		scanf("%d %d %d %d",&a,&b,&c,&d);
		scanf("%d %d %d %d %d %d",&x,&y,&x1,&y1,&x2,&y2);
		if(x>=x1&&x<=x2&&y>=y1&&y<=y2&&(x2>x1||a+b==0)&&(y2>y1||c+d==0)){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}
