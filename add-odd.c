#include <stdio.h>
int main(){
	int a[]={1,2,3,4,5,1,2,3,4,5};
	int count;
	int sum=0;
	for (count = 0;count <=9;count++){
		if(a[count]%2==1)
			sum+=a[count];
	}
	printf("the sum is %d ",sum);
	return 0;
}
