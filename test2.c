/*
A question for candidates more fimilliar with C.
Question asked: What does this code do? Be as detailed as possible.
*/
#include <stdlib.h>

int printArray(int* arr, int size);

int main()
{
	int importantNumbers[] = {4,8,15,16,23,42};
	
	printArray(importantNumbers, sizeof importantNumbers / sizeof *importantNumbers);
	
	return EXIT_SUCCESS;
}

int printArray(int* arr, int size) 
{

    int i = 0;
    while (size --) 
	{
		if(size % 2 == 0)
		{
			printf("%d", *(arr + i++) << 2);
		}
		else
		{
			printf("%d", *(arr + i++) >> 2);
		}
		
		if(size > 0)
		{
			printf(", ");
		}
    }

    return EXIT_SUCCESS;
}
