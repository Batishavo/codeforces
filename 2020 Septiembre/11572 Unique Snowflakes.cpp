#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    scanf("%d",&n);
    while(n--){
        int m;
        int total=0;
        map<int,int>mymap;
        scanf("%d",&m);
        while(m--){
            int aux;
            scanf("%d",&aux);
            if(mymap[aux]==0){
                total++;
                mymap[aux]=1;
            }
        }
        printf("%d\n",total);

    }

return 0;
}
