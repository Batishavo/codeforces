#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    scanf("%d\n\n", &n);
    char s[200];
   // scanf("\n");
    //getline(cin, str);
    while(n--){
        int cont=0;
        map<string,int>letras;
        while(gets(s)){
            if(strlen(s)==0){
                break;
            }
            letras[s]++;
            cont++;
        }
        for(auto x:letras){
            cout<<x.first.data()<<" ";
            printf("%.4lf\n",(double)x.second*100.0/(double)cont);
        }
        if(n>0)
            printf("\n");

    }
    return 0;
}
