#include <stdio.h>
#include <stdlib.h>

void fib(int counter);

int num1=0,num2=1,total=0,no_of_terms = 0;

int main(int argc, char *argv[]) {
	
	int counter=0;
	printf("Enter the number of terms\n");
	scanf("%d",&no_of_terms);
	
	if ( no_of_terms == 0)
	  printf("Please enter a valid term number\n");
	else if (no_of_terms == 1)
	  printf("The fibonacci series is 0\n");
	else if (no_of_terms == 2)
	  printf("The fibonacci series is :0 & 1\n");
	else{
	  printf("The fibonacci series is :%d\t%d\t",num1,num2);
	  counter = no_of_terms-2;
	  fib(counter);
	
	}
	
}

void fib(int counter){
	
	if ( counter <= 0){
		
		exit(0);
		
	}
	else{
		
		total = num1+num2;
		printf("%d\t",total);
		num1 = num2;
		num2 = total;
		counter--;
		fib(counter);
		
	}
	
	
}
