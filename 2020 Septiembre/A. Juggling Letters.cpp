#include<bits/stdc++.h>
using namespace std;
int bucket[200];
int main(){
    int n;
    scanf("%d",&n);
    while(n--){
        int m;
        scanf("%d",&m);
        for(int i=0;i<m;i++){
            string cad;
            cin>>cad;
            for(int j=0;j<cad.length();j++){
                bucket[cad[j]]++;
            }
        }
        int flag=0;
        for(int i='a';i<='z';i++){
            if(bucket[i]%m!=0){
                flag=1;
            }
            bucket[i]=0;
        }
       // printf("___________________\n");
        if(!flag){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}
