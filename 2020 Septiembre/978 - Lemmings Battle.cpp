#include<bits/stdc++.h>
using namespace std;
int main(){
    int q;
    int n,sg,sb;
    priority_queue<int>soldierG,soldierB;
    vector <int>batleg,batleb;
    scanf("%d",&q);
    while(q--){
        scanf("%d %d %d",&n,&sg,&sb);
        for(int i=0;i<sg;i++){
            int aux;
            scanf("%d",&aux);
            soldierG.push(aux);
        }
        for(int i=0;i<sb;i++){
            int aux;
            scanf("%d",&aux);
            soldierB.push(aux);
        }
        while(!soldierG.empty()&& !soldierB.empty()){
            int bt=0;
            batleg.clear();
            batleg.clear();
            for(int i=0;i<n;i++){
                if(soldierG.empty()|| soldierB.empty()){
                    break;
                }
                batleg.push_back(soldierG.top());
                batleb.push_back(soldierB.top());
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
            printf("green wins\n");
            while(!soldierG.empty()){
                printf("%d\n",soldierG.top());
                soldierG.pop();
            }
        }
        else{
            printf("blue wins\n");
            printf("%d\n",soldierB.top());
            soldierB.pop();
        }
        if(q!=0){
            printf("\n");
        }
    }
    return 0;
}
