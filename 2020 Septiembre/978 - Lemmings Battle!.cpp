#include<bits/stdc++.h>
using namespace std;
int main(){
    int q;
    scanf("%d",&q);
    while(q--){
        int n,sg,sb;
        priority_queue<int>soldierG,soldireB;
        scanf("%d %d %d",&n,&sg,&sb);
        for(int i=0;i<sg;i++){
            int aux;
            scanf("%d",&aux);
            soldierG.push(aux);
        }
        for(int i=0;i<sb;i++){
            int aux;
            scanf("%d",&aux);
            soldierb.push(aux);
        }
        while(!soldierG.empty()&& !soldierB.empty()){
            vector <int>batleg,batleb;
            int bt=0;
            for(int i=0;i<n;i++){
                if(soldierG.empty()|| soldierB.empty()){
                    break;
                }
                batleg=soldierG.top();
                batleb=soldierB.top();
                soldierG.pop();
                soldierB.pop();
                bt++;
            }
            for(int i=0;i<bt;i++){
                if(batleg[i]>batleb[i]){
                    soldierG.push(batleg[i]-batleb[i]);
                }
                else if(batleg[i]<batleb[i]){
                    soldierG.push(batleb[i]-batleg[i]);
                }
            }
        }
        if(soldierG.empty()&&soldierB.empty()){
            printf("green and blue died");
        }
        else if(soldierB.empty()){
            printf("green wins");
            while(!soldierG.empty()){
                printf("%d\n",soldierG.top());
                soldierG.pop();
            }
        }
        else{
            printf("blue wins")
            printf("%d\n",soldierB.top());
            soldierB.pop();
        }
        if(q!=0){
            printf("---\n\n");
        }
    }
    return 0;
}
