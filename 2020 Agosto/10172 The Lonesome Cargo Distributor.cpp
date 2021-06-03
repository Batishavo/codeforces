#include<bits/stdc++.h>
using namespace std;
int arr[7000];
int main(){
    int n;
    while(true){
        scanf("%d",&n);
        if(n==0){
            break;
        }
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        sort(arr,arr+n);
        int cont=arr[0]+arr[1];
        int tmp=arr[0]+arr[1];
        for(int i=2;i<n;i++){
           cont+=tmp+arr[i];
           tmp=tmp+arr[i];
        }
        printf("%d\n",cont);
    }
return 0;
}
