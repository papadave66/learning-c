#include <stdio.h>
int main(){

//how about pointers point each other?
//Sounds cool
	int var;
	int *pointer1;
	int **pointer2;

	var = 66;
	pointer1 = &var;
	pointer2 = &pointer1;

	printf("value of var is %d and the address is %p\n", var ,&var);
	printf("value of pointer1 is %d and the address is %p\n", *pointer1,pointer1);
	printf("value of pointer2 is %d and the address is %p\n", **pointer2,pointer2);
	return 0;
}
