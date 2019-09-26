#include<cstdio>
long long queris;
int main(){
	scanf("%d",&queris);
	while(queris--){
		long long all,toys,stiker;
		scanf("%lld %lld %lld",&all,&toys,&stiker);
		long long minun,plusle;
		minun=(toys<stiker)?toys:stiker;
		plusle=(toys>stiker)?toys:stiker;
		if(toys+stiker==all){
			printf("%lld\n",plusle+1);
		}
		/*else if(toys==all || stiker==all){
			printf("xxx1\n");
		}*/
		else{
			printf("%lld\n",(all-minun)+1);
		}
	}
	return 0;
}
