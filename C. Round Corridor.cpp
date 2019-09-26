#include<cstdio>
int n,m,q;
bool can(int n1,int m1,int n2,int m2){
	int par1,part2,pos1,pos2;
	if(n1==1){
		if(n%2==0){
			if(m1<=n/2){
				pos1=1;
			}
			else{
				pos1=0;
			}
		}
		else{
			if(m1<=n/2){
				pos1=1;
			}
			else if(m1>(n/2)+1){
				pos1=0;
			}
			else{
				pos1=3;
			}
		}
	}
	else{
		if(m%2==0){
			if(m1<=m/2){
				pos1=1;
			}
			else{
				pos1=0;
			}
		}
		else{
			if(m1<=m/2){
				pos1=1;
			}
			else if(m1>(m/2)+1){
				pos1=0;
			}
			else{
				pos1=3;
			}
		}
	}
	///////////////////////
	if(n2==1){
		if(n%2==0){
			if(m2<=n/2){
				pos2=1;
			}
			else{
				pos2=0;
			}
		}
		else{
			if(m2<=n/2){
				pos2=1;
			}
			else if(m2>(n/2)+1){
				pos2=0;
			}
			else{
				pos2=3;
			}
		}
	}
	else{
		if(m%2==0){
			if(m2<=m/2){
				pos2=1;
			}
			else{
				pos2=0;
			}
		}
		else{
			if(m2<=m/2){
				pos2=1;
			}
			else if(m2>(m/2)+1){
				pos2=0;
			}
			else{
				pos2=3;
			}
		}
	}
	if((pos1==3 || pos2==3)||(pos1==pos2)){
		return true;
	}
	else{
		return false;
	}
}
int main(){
	scanf("%d %d %d",&n,&m,&q);
	for(int i=0;i<q;i++){
		int n1,n2,m1,m2;
		scanf("%d %d %d %d",&n1,&m1,&n2,&m2);
		if(can(n1,m1,n2,m2)){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	
	return 0;
}
