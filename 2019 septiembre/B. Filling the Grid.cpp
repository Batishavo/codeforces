#include<cstdio>
const int lim=1e3;
long long cosa=1000000007;
int n,m;
int arrn[lim+10],arrm[lim+10];
int tempn[lim+10],tempm[lim+10];
int mat[lim+10][lim+10];
int cont;
long long resultado=1;
void mark(){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(arrn[i]>0){
				mat[i][j]=1;
				arrn[i]--;
			}
			if(arrm[j]>0){
				mat[i][j]=1;
				arrm[j]--;
			}
			if(arrn[i]==0 && mat[i][j]==0 ){
				mat[i][j]=3;
				arrn[i]--;
			}
			if(arrm[j]==0 && mat[i][j]==0){
				mat[i][j]=3;
				arrm[j]--;
			}
		}
	}
}
bool can(){
	printf("%d\n",cont);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("%d",mat[i][j]);
		}
		printf("\n");
	}	
	return true;
}
int main(){
	/*scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++){
		scanf("%d",&arrn[i]);
		tempn[i]=arrn[i];
	}
	for(int j=0;j<m;j++){
		scanf("%d",&arrm[j]);
		tempm[j]=arrm[j];
	}
	mark();
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(mat[i][j]==0){
				cont++;
				mat[i][j]=2;
			}
		}
	}
	printf("%d\n",cont);
	//cont+=2;
	while(cont>0){
		resultado=(resultado*2)%cosa;
		cont--;
	}
	can();
	printf("%lld\n",resultado);*/
	printf("%lld\n",562949953421312*2*2%cosa);
	return 0;
}
