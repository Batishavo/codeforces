#include<bits/stdc++.h>
using namespace std;
int main(){
    int q;
    scanf("%d",&q);
    while(q--){
        int n;
        string cad,solution="";
        scanf("%d",&n);
        cin>>cad;
        for(int i=0;i<(n*2)-1;i+=2){
            solution+=cad[i];
        }
        cout<<solution<<endl;
    }
    return 0;
}
