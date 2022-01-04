// check a pnumber is divisible by 2 or not
#include<stdio.h>
void main()
{
	int num1;
	printf(" Enter a number for chaking it is divisible by 2 or not\n ");
	scanf(" %d",&num1);
	
	if(num1%2==0)
	printf("\n \tThe number %d is divisible by 2",num1);
	else
	printf("\n \t The number %d is not divisible by 2",num1); 
}
