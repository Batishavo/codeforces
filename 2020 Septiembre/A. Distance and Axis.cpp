#include<bits/stdc++.h>
using namespace std;
int main(){
    int q;
    scanf("%d",&q);
    while(q--){
        int n,m;
        scanf("%d %d",&n,&m);
        if(m>=n){
            printf("%d\n",m-n);
        }
        else{
            int aux=n-m;
            if(aux%2==0){
                printf("%d\n",0);
            }
            else{
                printf("%d\n",1);
            }
        }

    }
    return 0;
}
