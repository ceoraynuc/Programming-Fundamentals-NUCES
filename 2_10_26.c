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




#include <stdio.h>

int main() {
    int number = 1,sum=0;

    while (number != 0) { 
        printf("Enter a number: "); 
        scanf("%d", &number); 
        sum = sum+number;
        printf("\n%d\n",sum);
    } 

    printf("Zero entered.\n"); 
    return 0;
}



#include <stdio.h>

int main() {
    int prices[5]={100,200,300,400,500};
    prices[3]=1000;
    printf("%d",prices[2]);
    return 0;
}



#include <stdio.h>

int main() {
    int prices[5]={100,200,300,400,500};
    int i;
    for( i =0;i <5;i++){
    	printf("%d :index \n %d :prices \n",i,prices[i]);
	}
    return 0;
}

#include <stdio.h>

int main() {
    char prices[5]={'a','e','i','o','u'};
    int i;
    for( i =0;i <5;i++){
    	printf("%d :index \n %c :prices \n",i,prices[i]);
	}
    return 0;
}
