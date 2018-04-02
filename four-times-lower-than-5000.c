#include <math.h>
#include <stdio.h>
//求5000以内 能开四次方的整数
int main(){
	int i=0;
	int j=0;
	for (i=1;i<=500;i++){
		j=i*i*i*i;
		if(j<=5000){
			printf("%d ",i);
		}else{
			break;
		}
	}
	return 0;
}
