#include<cstdio>
char mat[600][600];
int eje_i[]={1,0,-1,0};
int eje_j[]={0,-1,0,1};
int n,m;
bool primera(){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(mat[i][j]=='*'){	
				bool flag=1;
				for(int c=0;c<4;c++){
					if(mat[i+eje_i[c]][j+eje_j[c]]=='*'){
						flag=1;	
					}
					else{
						flag=0;
						break;
					}				
				}
				if(flag==1){
					for(int z=i;z<n;z++){
						if(mat[z][j]=='.'){
							mat[z][j]='.';	
						}
						else{
							break;
						}
					}
					for(int z=i;z>=0;z--){
						if(mat[z][j]=='.'){
							mat[z][j]='.';	
						}
						else{
							break;
						}
						
					}
					for(int z=j;z<m;z++){
						if(mat[z][j]=='.'){
							mat[i][z]='.';	
						}
						else{
							break;
						}
						
					}
					for(int z=j;z>=0;z--){
						if(mat[z][j]=='.'){
							mat[i][z]='.';	
						}
						else{
							break;
						}
					}
					return true;	
				}	
			}
		}
	}
	return false;
}
bool segunda(){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(mat[i][j]=='*'){
				return false;
			}
		}
	}
	return true;
}
int main(){
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf(" %c",&mat[i][j]);
		}
	}
	if(primera()){
		if(segunda()){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}	
	}
	else{
		printf("NO\n");
	}
	
	return 0;
}
