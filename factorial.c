#include<stdio.h>
#include<stdlib.h>

void factorial ( int num);

int total=0;

int main(){
	
	
	int num;
	printf("Enter the number whose factorial has to be found\n");
	scanf("%d",&num);
	total =num;
	factorial(num);
	printf("The total is %d\n", total);

}

void factorial( int num){
   if( num <= 1){

   }
   else {
	num -= 1;
	total = total * num;
	factorial(num);
	
	
   }

}
