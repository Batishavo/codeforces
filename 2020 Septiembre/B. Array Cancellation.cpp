#include<bits/stdc++.h>
using namespace std;
const int lim=1e5;
int arr[lim];
int main(){
    int q;
    scanf("%d",&q);
    while(q--){
        int n;
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        int piv=0,piv2=n-1;
        while(piv<piv2){
            if(arr[piv]>0){
                while(arr[piv2]>=0 && piv<piv2 ){
                    piv2--;
                }
                if(arr[piv]>0 && arr[piv2]<0){
                    int tmp=min(arr[piv],abs(arr[piv2]));
                    arr[piv]-=tmp;
                    arr[piv2]+=tmp;
                    printf("%d %d %d %d\n",piv,piv2,arr[piv],arr[piv2]);
                }
            }
            else{
                piv++;
            }
        }
        long long cont=0;
        for(int i=0;i<n;i++){
            cont+=abs(arr[i]);
        }
        printf("--%lld\n",cont/2);
    }
    return 0;
}
