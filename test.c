#include <stdlib.h>

#define TRUE 1
#define FALSE 0

char* mysteryFunc(char* in);

int main()
{
	char* foo = "CubistMediaGroup";
	char* bar;
	
	printf("%s\r\n",foo);
	bar = mysteryFunc(foo);
	
	foo = '\0';
	
	printf("%s\r\n",foo);
	printf("%s\r\n",bar);
	
	return EXIT_SUCCESS;
}

char* mysteryFuncOne(char* in)
{
    char* returnVal = malloc(sizeof(char) * strlen(in));

    while(*(returnVal++)= *(in++) ) {}

    return returnVal;
}