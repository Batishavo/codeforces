#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    while(true){
        priority_queue<int,vector<int>,greater<int>>myqueue;
        scanf("%d",&n);
        if(n==0){
            break;
        }
        for(int i=0;i<n;i++){
            int aux;
            scanf("%d",&aux);
            myqueue.push(aux);
        }
        int cant=0;
        while(myqueue.size()>1){
            int tmp=myqueue.top();
            myqueue.pop();
            tmp+=myqueue.top();
            myqueue.pop();
            myqueue.push(tmp);
            cant+=tmp;
            //printf("%d\n",cant);
        }
        printf("%d\n",cant);
    }
    return 0;
}
