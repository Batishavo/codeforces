#include<cstdio>
int arr[10];
int arr2[10];
int girl[10][5];
int girl2[10][5];
int bucket[100];
bool can(){
	girl[0][0]=arr[0];girl[0][1]=arr[1];girl[0][2]=arr[2];
	girl[1][0]=arr[0];girl[1][1]=arr[2];girl[1][2]=arr[1];
	girl[2][0]=arr[1];girl[2][1]=arr[0];girl[2][2]=arr[2];
	girl[3][0]=arr[1];girl[3][1]=arr[2];girl[3][2]=arr[0];
	girl[4][0]=arr[2];girl[4][1]=arr[0];girl[4][2]=arr[1];
    girl[5][0]=arr[2];girl[5][1]=arr[1];girl[5][2]=arr[0];
	///////////////////////////////////////////////////
	girl2[0][0]=arr2[0];girl2[0][1]=arr2[1];girl2[0][2]=arr2[2];
	girl2[1][0]=arr2[0];girl2[1][1]=arr2[2];girl2[1][2]=arr2[1];
	girl2[2][0]=arr2[1];girl2[2][1]=arr2[0];girl2[2][2]=arr2[2];
	girl2[3][0]=arr2[1];girl2[3][1]=arr2[2];girl2[3][2]=arr2[0];
	girl2[4][0]=arr2[2];girl2[4][1]=arr2[0];girl2[4][2]=arr2[1];
    girl2[5][0]=arr2[2];girl2[5][1]=arr2[1];girl2[5][2]=arr2[0];
    /////////
    for(int i=0;i<6;i++){
    	for(int j=0;j<6;j++){
    		int cont=0;
    		for(int x=0;x<3;x++){
    			if(girl[i][x]<girl2[j][x]){
    				cont++;
				}
			}
			if(cont<2){
				return false;
			}
		}
	}    
	return true;
}
int main(){
	while(true){
		for(int i=0;i<5;i++){
			scanf("%d",&arr[i]);
			bucket[arr[i]]=1;
		}
		if(arr[0]==0 &&arr[1]==0 &&
		   arr[2]==0 &&arr[3]==0 &&arr[4]==0){
			break;
		}
		arr2[0]=arr[3];
		arr2[1]=arr[4];
		int num=-1;
		for(int i=1;i<=52;i++){
			arr2[2]=i;
			if(bucket[i]==0 && can()){
				num=i;
				break;
			}
			//bucket[i]=0;
		}
		for(int i=1;i<=52;i++){
			bucket[i]=0;
		}
		printf("%d\n",num);
	}
	return 0;
}
