#include <stdio.h>
int main(){
int count = 0;
int i;
int x,y,z;
for (i=0;i<10;i++){
	if(i%2==0){
		printf("%d\t",i);
	count ++;
	}
}
for (i=10;i<100;i++){
	y = i/10;
	z = i%10;
	if ((y+z)%2==0){
		printf("%d\t",i);
	count++;
	}
}
for (i=100;i<500;i++){
	x = i/100;
	y = i/10%10;
	z = i %10;
	if((x+y+z)%2 == 0){
		printf("%d\t",i);
	count ++;
	}
}
	printf("the count is %d",count);
	return 0;
}
