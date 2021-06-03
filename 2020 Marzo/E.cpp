#include<cstdio>
int arr[1000000];
int main(){
	int n,m;
    scanf("%d %d",&n,&m);
    for(int i=0;i<m;i++){
        int vaso;
        scanf("%d",&vaso);
        arr[vaso]++;
    }
     for(int i=1;i<=n;i++){
        printf("%d\n",arr[i]);
    }
    
}
