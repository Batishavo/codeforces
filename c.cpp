#include <bits/stdc++.h>

using namespace std;

// Complete the superDigit function below.
int superDigit(string n, int k) {
    long long salida;
    while(n.length()>1){
        long long num=0;
        int p=1;
        for(int i=n.length()-1;i>=0;i--){
            num+=(n[i]-'0')*p;
            p*=10;
        }
        n="";
        while(num>0){
            n+=(num%10)+'0';
            num/=10;
        }    
    }
    string aux;
    for(int i=0;i<k;i++){
        aux+=n;
    }
    while(aux.length()>0){
        int p=1;
        long long num=0;
        for(int i=aux.length()-1;i>=0;i--){
            num+=(aux[i]-'0')*p;
            p*=10;
        }
        aux="";
        while(num>0){
            aux+=(num%10);
            num/=10;
        }
        salida=num;
    }
    return salida;
}

int main()
{
    string n;
    
    int k;
    
    cin>>n>>k;


    int result = superDigit(n, k);

    fcvt << result << "\n";

    fout.close();

    return 0;
}

