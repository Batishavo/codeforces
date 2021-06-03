#include<cstdio>
int main(){
	int q;
	scanf("%d",&q);
	while(q--){
		int a,b,c,d;
		int x,y,x1,y1,x2,y2;	
		scanf("%d %d %d %d",&a,&b,&c,&d);
		scanf("%d %d %d %d %d %d",&x,&y,&x1,&y1,&x2,&y2);
		int tmp=x+b-a;
		int tmp2=y+d-c;
		if(tmp>=x1 && tmp<=x2 && tmp2>=y1 && tmp2<=y2){
			if((x2-x1==0 && (a!=0 || b!=0))||
			   (y2-y1==0 && (c!=0 || d!=0))){
				printf("No\n");
			}
			else{
				printf("Yes\n");
			}
		}
		else{
			printf("No\n");
		}
	}
	return 0;
}
