#include <stdio.h>
int main()
{
	
//	it will show the sum and total number of even numbers 
	int sum=0, count=0, i;
	
	for (i=0; i<= 100; i+=2)
	{
		printf("\n%d", i);
		count++;
		sum+= i;
  }
	
	printf("\nsum = %d and Total num = %d", sum, count);


}

