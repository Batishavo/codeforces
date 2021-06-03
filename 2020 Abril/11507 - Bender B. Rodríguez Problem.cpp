#include<bits/stdc++.h>
using namespace std;
map<string,string>mat;
int main(){
	int n;
	mat["+x+y"] = "+y";
    mat["+x-y"] = "-y";
    mat["+x+z"] = "+z";
    mat["+x-z"] = "-z";
    mat["-x+y"] = "-y";
    mat["-x-y"] = "+y";
    mat["-x+z"] = "-z";
    mat["-x-z"] = "+z";
    mat["+y+y"] = "-x";
    mat["+y-y"] = "+x";
    mat["+y+z"] = "+y";
    mat["+y-z"] = "+y";
    mat["-y+y"] = "+x";
    mat["-y-y"] = "-x";
    mat["-y+z"] = "-y";
    mat["-y-z"] = "-y";
    mat["+z+y"] = "+z";
    mat["+z-y"] = "+z";
    mat["+z+z"] = "-x";
    mat["+z-z"] = "+x";
    mat["-z+y"] = "-z";
    mat["-z-y"] = "-z";
    mat["-z+z"] = "+x";
    mat["-z-z"] = "-x";
	while(true){
		scanf("%d",&n);
		if(n==0){
			break;
		}
		string result="+x";
		for(int i=0;i<n-1;i++){
			string tmp;
			cin>>tmp;
			if(tmp!="No"){
				string aux=result+tmp;
				result=mat[aux];
			}
		}
		cout<<result<<endl;
	}
	
	return 0;
}
