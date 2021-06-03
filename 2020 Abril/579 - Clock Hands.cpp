#include<bits/stdc++.h>
using namespace std;
int main(){
	while(true){
		string cad;
		cin>>cad;
		if(cad=="0:00"){
			break;
		}
		int h=0,m=0;
		int tmp=1;
		int flag=0;
		for(int i=cad.length()-1;i>=0;i--){
		//	cout<<cad[i]<<endl;
			if(cad[i]==':'){
				flag=1;
				tmp=1;
			}		
			else if(flag==0){
				m+=((cad[i]-'0')*tmp);
				tmp*=10;
			}
			else{
				h+=((cad[i]-'0')*tmp);
				tmp*=10;
			}
		//	cout<<h<<" "<<m<<endl;
		}
		
		double recoh=(double)(h*30.0)+(m*0.5);
		double recom=(double)(m*6);
		double total=abs(recoh-recom);
		printf("%.3lf\n",min((double)360.0-total,total));
	}
	
	return 0;
}
