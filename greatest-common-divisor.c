#include <stdio.h>
void match(int x,int y){
	int a=1;
	int b=0;
	for(a=1;a<=x;a++){
		if(x%a==0){
			if(y%a==0){
				b=a;	
			}
		}	
	}
	if(b==0){
		printf("what the fuck .there is no greatest common divisor in these two number");
	}else{
		printf("%d\n",b);
	}
}
int main(){
	int x,y;
	match(56,70);
	return 0;

}

