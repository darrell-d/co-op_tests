/*
A basic fizzbuzz solution. Usually ask candidates to write their own.
This is not mean to be the correct answer, but rather a basic solution.
*/
int main()
{
	int i;
	for(i = 1; i <=100; i++)
	{
		if(i%5 ==0 && i%3 ==0)
		{
			printf("%s, ","FizzBuzz");
		}
		else if(i%3 == 0)
		{
			printf("%s, ","Fizz");
		}
		else if(i%5 == 0)
		{
			printf("%s, ","Buzz");
		}
		else
		{
			printf("%i, ",i);
		}
	}
	return 0;
}
