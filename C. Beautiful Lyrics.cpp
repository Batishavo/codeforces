#include<iostream>
#include<algorithm>
using namespace std;
const int lim=1e6;
int n,sum_a,sum_e,sum_i,sum_o,sum_u,sum_x;
struct palabras{
	int cant;
	string palabra;
	palabras(int num,string p){
		cant=num;
		palabra=p;
	}
	palabras(){
		cant=0;
		palabra="";
	}
};
bool compare(palabras a, palabras b){
	if(a.cant<b.cant){
		return true;
	}
	else {
		return false;
	}
}
palabras a[lim];
palabras e[lim];
palabras i[lim];
palabras o[lim];
palabras u[lim];
palabras x[lim];
//////////////////////////////////
void step1(){
	cin>>n;
	for(int z=0;z<n;z++){
		string aux;
		int temp=0;
		char last='x';
		cin>>aux;
		for(int j=0;j<aux.length();j++){
			if(aux[j]=='a'||aux[j]=='e'||aux[j]=='i'||aux[j]=='o'||aux[j]=='u'){
				temp++;
				last=aux[j];
			}
		}
		palabras nueva =palabras(temp,aux);
		if(last=='a'){
			a[sum_a++]=nueva;
		}	
		else if(last=='e'){
			e[sum_e++]=nueva;
		}
		else if(last=='i'){
			i[sum_i++]=nueva;
		}	
		else if(last=='o'){
			o[sum_o++]=nueva;
		}	
		else if(last=='u'){
			u[sum_u++]=nueva;
		}	
		else{
			x[sum_x++]=nueva;
		}	 
	}
	sort(a,a+sum_a,compare);
	sort(e,e+sum_e,compare);
	sort(i,i+sum_i,compare);
	sort(o,o+sum_o,compare);
	sort(u,u+sum_u,compare);
	sort(x,x+sum_x,compare);
}
palabras iguales[lim];
palabras temp[lim];
palabras primeras[lim];
int cant=0,total=0,sum_temp=0,sum_iguales=0;
void step2(){
	for(int z=0;z<sum_a;z++){
		if(a[z].cant==a[z+1].cant){
			iguales[total++]=a[z];
			iguales[total++]=a[z+1];
			++z;
		}
		else{
			temp[sum_temp++]=a[z];
		}
	}
	for(int z=0;z<sum_e;z++){
		if(e[z].cant==e[z+1].cant){
			iguales[total++]=e[z];
			iguales[total++]=e[z+1];
			++z;
		}
		else{
			temp[sum_temp++]=e[z];
		}
	}
	for(int z=0;z<sum_i;z++){
		if(i[z].cant==i[z+1].cant){
			iguales[total++]=i[z];
			iguales[total++]=i[z+1];
			++z;
		}
		else{
			temp[sum_temp++]=i[z];
		}
	}
	for(int z=0;z<sum_o;z++){
		if(o[z].cant==o[z+1].cant){
			//cout<<"x"<<endl;
			iguales[total++]=o[z];
			iguales[total++]=o[z+1];
			++z;
		}
		else{
			temp[sum_temp++]=o[z];
		}
	}
	for(int z=0;z<sum_u;z++){
		if(u[z].cant==u[z+1].cant){
			iguales[total++]=u[z];
			iguales[total++]=u[z+1];
			++z;
		}
		else{
			temp[sum_temp++]=u[z];
		}
	}
	for(int z=0;z<sum_x;z++){
		if(x[z].cant==x[z+1].cant){
			iguales[total++]=x[z];
			iguales[total++]=x[z+1];
			++z;
		}
		else{
			temp[sum_temp++]=x[z];
		}
	}
	
}
step3(){
	sort(temp,temp+sum_temp,compare);
	int cont =0;
	string cad="";
	for(int z=0;z<sum_temp;z++){
		if(temp[z].cant==temp[z+1].cant){
			primeras[sum_iguales++]=temp[z];
			primeras[sum_iguales++]=temp[z+1];
			++z;
		}
	}
	int pos=0;
	while(pos<sum_iguales && pos<total){
		cont++;
		cad+=primeras[pos].palabra+" "+iguales[pos].palabra+"\n"+primeras[pos+1].palabra+" "+iguales[pos+1].palabra+"\n";
		pos+=2;
	//	cout<<pos<<" "<<primeras[pos].palabra+" "+iguales[pos].palabra+"\n"+primeras[pos+1].palabra+" "+iguales[pos+1].palabra<<endl;
	}
	while(pos<total-3){
		//out<<"xxxxxxxxx";
		cont++;
		cad+=iguales[pos].palabra+" "+iguales[pos+2].palabra+"\n"+iguales[pos+1].palabra+" "+iguales[pos+3].palabra+"\n";
		pos+=4;
	//	cout<<pos<<" "<<iguales[pos].palabra+" "+iguales[pos+2].palabra+"\n"+iguales[pos+1].palabra+" "+iguales[pos+3].palabra<<endl;
	}
	cout<<cont<<endl<<cad;
	/*cout<<"____________________"<<endl;
	for(int z=0;z<sum_iguales;z++){
		cout<<primeras[z].palabra<<endl;
	}
	cout<<"_______________"<<endl;
	for(int z=0;z<total;z++){
		cout<<iguales[z].palabra<<endl;		
	}*/
}
int main(){
	step1();
	step2();
	step3();
	return 0;
}
