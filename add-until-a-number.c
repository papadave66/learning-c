#include<stdio.h>
int main(){
	double S=5.0;
	double x=1.0;
	while(S<=7.6){
		S+=(x+2)/(x+(x+1));
		x=x+3;
	}
	printf("%lf",S);
	return 0;
}
