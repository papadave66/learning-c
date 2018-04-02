#include <stdio.h>
int main(){
	char a[]={"aaaAFWFId183979137"};
	char b[100];
	int counter;
	int bcounter=0;
	for(counter=0;a[counter]!='\0';counter++){
		if((a[counter]<='z'&&a[counter]>='a')||(a[counter]>='0'&&a[counter]<='9')){
			b[bcounter]=a[counter];
			bcounter++;
		}
	}
	bcounter++;
	b[bcounter]='\0';
	printf("%s\n",b);
	return 0;
}
