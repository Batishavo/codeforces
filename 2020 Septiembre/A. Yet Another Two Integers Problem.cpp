#include<bits/stdc++.h>
using namespace std;
int main(){
    int q;
    scanf("%d",&q);
    while(q--){
        int n,m;
        scanf("%d %d",&n,&m);
        int total=abs(n-m);
        int tmp=total%10==0?0:1;
        printf("%d\n",(total/10)+tmp);
    }
    return 0;
}
