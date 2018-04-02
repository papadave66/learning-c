#include <stdio.h>
#define MAXWORD 1000;
#define LINE 20;
char sentence [MAXWORD];
int main(){
	int temp_line = LINE;
	printf("please input a long sentence,and i will auto cut it into small sentences");
	while(sentence=getchar()!=EOF){
	#ok now we can get what we need
		if(sentence[temp_line]==" "){
			sentence[temp_line]="\t";
		}else{
			temp_line++;
		}
	printf("")
	}
}
