// swaping of two nomber

#include<stdio.h>
void main()
{
	int num1,num2;
	printf("Enter the two number for swapping");
	scanf(" \n %d %d",&num1,&num2);
	printf("\n before swaping the twonumber are \n num1=%d \n num2=%d",num1,num2);
	
	num1=num1+num2;
	num2=num1-num2;
	num1=num1-num2;
	 
	printf("\n after swaping the twonumber are \n num1=%d \n num2=%d",num1,num2);
}

/*
#include<stdio.h>
void main()
{
	int num1,num2,temp;
	printf("Enter the two number for swapping");
	scanf(" \n %d %d",&num1,&num2);
	printf("\n before swaping the twonumber are \n num1=%d \n num2=%d",num1,num2);
	
	temp=num1;
	num1=num2;
	num2=temp;
	printf("\n after swaping the twonumber are \n num1=%d \n num2=%d",num1,num2);
}
	
	
	*/
	
