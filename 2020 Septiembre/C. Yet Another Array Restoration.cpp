#include<bits/stdc++.h>
using namespace std;
const long long lim=1e10;
int main(){
    int q;
    scanf("%d",&q);
    while(q--){
        long long n,a,b;
        scanf("%lld %lld %lld",&n,&a,&b);
        long long tmp=abs(b-a);
        vector<long long>multis;
        for(int i=1;i<=sqrt(tmp);i++){
            if(tmp%i==0){
                multis.push_back(i);
            }
        }
        int lon=multis.size();
        for(int i=lon-1;i>=0;i--){
            long long aux=tmp/multis[i];
            multis.push_back(aux);
        }
        ///////////////////////////////////7
        lon=multis.size();
        for(int i=0;i<lon;i++){
            long long aux=tmp/multis[i];
            if(aux+1<=n){
                for(long long j=a;j<=b;j+=multis[i]){
                    printf("%lld ",j);
                    n--;
                }
                while(n>0 && a-multis[i]>0){
                    n--;
                    a-=multis[i];
                    printf("%lld ",a);
                }
                while(n>0){
                    n--;
                    b+=multis[i];
                    printf("%lld ",b);
                }
                printf("\n");

                break;
            }
        }
        /////////////////////////////////

    }
    return 0;
}
