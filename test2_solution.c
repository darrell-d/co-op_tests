#include <stdlib.h>

int printArray(int* arr, int size); // Prototype

int main()
{
	int importantNumbers[] = {4,8,15,16,23,42};
	
	printArray(importantNumbers, sizeof importantNumbers / sizeof *importantNumbers); // 2nd value get's the size of importantNumbers
	
	return EXIT_SUCCESS;
}

int printArray(int* arr, int size) 
{

    int i = 0;
    while (size --) 
	{
		if(size % 2 == 0) // Check for even numbers
		{
			printf("%d", *(arr + i++) << 2); //divide by 4
		}
		else
		{
			printf("%d", *(arr + i++) >> 2); //multiply by 4
		}
		
		if(size > 0)
		{
			printf(", ");
		}
    }

    return EXIT_SUCCESS;
}
