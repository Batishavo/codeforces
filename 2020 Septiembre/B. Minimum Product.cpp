#include<bits/stdc++.h>
using namespace std;
int main(){
    int q;
    scanf("%d",&q);
    while(q--){
        long long a,b,x,y,n;
        scanf("%lld %lld %lld %lld %lld",&a,&b,&x,&y,&n);
        long long tmp1=a-x;
        long long tmp2=b-y;
        long long mul1=0;
        long long mul2=0;
        ////////////////////////////////
        if(tmp1<n){
            long long aux=n-tmp1;
            if(tmp2<aux){
                mul1=x*y;
            }
            else{
                mul1=x*(b-aux);
            }
        }
        else{
            mul1=(a-n)*b;
        }
        if(tmp2<n){
            long long aux=n-tmp2;
            if(tmp1<aux){
                mul2=x*y;
            }
            else{
                mul2=y*(a-aux);
            }
        }
        else{
            mul2=(b-n)*a;
        }
        /////////////////////
        printf("--%lld\n",min(mul1,mul2));

    }
    return 0;
}
