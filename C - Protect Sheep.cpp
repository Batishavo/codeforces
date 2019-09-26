#include<cstdio>
char mat[1000][1000];
int n,m;
int main(){
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            char aux;
            scanf(" %c",&aux);
            if(aux=='.')
                mat[i][j]='D';
            else
                mat[i][j]=aux;
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(mat[i][j]=='W'){
                if(mat[i+1][j]=='S'||mat[i-1][j]=='S'||mat[i][j-1]=='S'||mat[i][j+1]=='S'){
                    printf("NO\n");
                    return 0;
                }

            }
        }
    }
      printf("Yes\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%c",mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}
