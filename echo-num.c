//输出100到9999之间的回文数。（回文数指前后位数对称比如：131，12521，23632，272）
#include <stdio.h>
int main(){
int x;
int thousand,hundred,ten,one;
for(x=100;x<1000;x++){
	hundred=x/100;
	one=x%10;
	if(hundred==one){
		printf("%d \t",x);
	}
}
for(x=1000;x<=9999;x++){
	thousand=x/1000;
	hundred=x/100%10;
	ten=x/10%10;
	one=x%10;
	if(thousand==one&&hundred==ten){
		printf("%d\t",x);
	}
	
}
	return 0;
}
