#include<cstdio>
const int lim=1e8;
int n,m,f1,f2,menor=lim;
int mark[1000][1000],memo[1000][1000];
char mat[5000][5000];
void reco(int pos_y,int pos_x,int pasos){
    int temp=0;
    if(pos_y<0||pos_x<0||pos_y>=n||pos_x>=m)
        return;
    if(mat[pos_y][pos_x]=='#')
        return;
    if(pasos>=menor)
        return;
    if(mark[pos_y][pos_x]==1)
            return;
    if(pos_y==f1-1 && pos_x==f2-1){
         if(mat[pos_y][pos_x]=='.')
            temp=0;
        else
            temp=mat[pos_y][pos_x]-'0';
        if(pasos+temp<menor)
            menor=pasos+temp;
        return;
    }
    if(mat[pos_y][pos_x]=='.')
        temp=1;
    else
        temp=mat[pos_y][pos_x]-'0'+1;
    if(memo[pos_y][pos_x]<=pasos+temp && memo[pos_y][pos_x]!=0)
            return;
    mark[pos_y][pos_x]=1;
    memo[pos_y][pos_x]=pasos+temp;
    reco(pos_y+1,pos_x,pasos+temp);
    reco(pos_y-1,pos_x,pasos+temp);
    reco(pos_y,pos_x+1,pasos+temp);
    reco(pos_y,pos_x-1,pasos+temp);
    mark[pos_y][pos_x]=0;
}
int main(){
    int p1,p2;
    scanf("%d %d %d %d %d %d",&n,&m,&p1,&p2,&f1,&f2);
    for(int i=0;i<n;i++){
        for(int j=0;j<=m;j++){
            scanf(" %c",&mat[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf(" %c",mat[i][j]);
        }
        printf("\n");
    }
 //   reco(p1-1,p2-1,0);
   // printf("%d\n",menor);
    return 0;
}
