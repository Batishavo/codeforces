#include<cstdio>
#include<iostream>
using namespace std;
const int lim=1e5;
string mat[5];
bool can(int n){
    int i=0,j=0;
    while(j<n){
    	printf("%d %d %c\n",i,j,mat[i][j]);
        if(mat[i][j]<='2'){
        	//printf("y %c\n",mat[i][j]);
            j++;
        }
        else if(mat[i][j]>'2'){
            i=(i==1)?0:1;
         //   printf("%d %d %c\n",i,j,mat[i][j]);
            if(mat[i][j]<='2'){
                return false;
            }
            j++;
        }
    }
    return i==1;
}
int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        int n;
        scanf("%d",&n);
        cin>>mat[0]>>mat[1];
        //cout<<"x";
        printf(can(n)?"YES\n":"NO\n");
    }
    return 0;
}
