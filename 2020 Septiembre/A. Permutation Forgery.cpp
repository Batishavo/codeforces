#include<bits/stdc++.h>
using namespace std;
int arr[200];
int main(){
    int q;
    scanf("%d",&q);
    while(q--){
        int n;
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        for(int i=n-1;i>=0;i--){
            printf("%d ",arr[i]);
        }
        printf("\n");
    }
    return 0;
}
