#include<cstdio>
int student,budget,hotels,weeks;
int main(){
	while((scanf("%d",&student)!=EOF)){
		scanf("%d %d %d",&budget,&hotels,&weeks);
		int exit=-1;
		for(int i=0;i<hotels;i++){
			int price;
			scanf("%d",&price);
			for(int j=0;j<weeks;j++){
				int temp;
				scanf("%d",&temp);
				if(temp>=student ){
					if(exit==-1 || student*price<exit){
						exit=student*price;
					}
				}
			}
		}	
		if(exit>budget || exit==-1 ){
			printf("stay home\n");
		}
		else{
			printf("%d\n",exit);
		}
	}
	return 0;
}
