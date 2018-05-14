#include <stdio.h>
#include <string.h>
struct Books{
	char title[10];
	char author[10];
	int bookid;
};
int main(){
	struct Books book1;
	strcpy(book1.title,"what?");

	printf("the book name is %s\n",book1.title);
	return 0;
}
