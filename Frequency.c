#include <stdio.h>

#define MAXSIZE 5

int main(int argc, char *argv[]) {
	
	int array[MAXSIZE],i=0 , result[MAXSIZE], k=0,j,count=0,iterator=0;
	
	result[MAXSIZE-1]=0;
	
	printf("Enter the array elements in ascending order\n");
	for ( i =0; i<=MAXSIZE-1;i++)
	  scanf ("%d",&array[i]);
	printf("You entered \n");
	for ( i =0; i<=MAXSIZE-1;i++)
	  printf("%d\t",array[i]);
   
    printf("\n");

    for ( i =0; i<=MAXSIZE-1;i++)
       result[i]= 1;    


    for( i= 0; i<=MAXSIZE-1;){
		//for( j= i+1; j<=MAXSIZE-1;){
			j = i+1;
			count =0;
			iterator =0;
			if( array[i]==array[j]){
				
				while((array[i]==array[j]) && (j <= MAXSIZE-1)){
					result[k]++;
					 j++;
					count++;
					//j++;
				}
				i = i+j+1;
				while ( iterator < count){
					k++;
					result[k] = result[k-1];
					iterator++;
					
				}
				
				
			}
			else{
				i++;
				k++;
				//j++;
				
			}
			
		//}
    }
 for ( i =0; i<=MAXSIZE-1;i++)
    printf("%d\t",result[i]);
	
	
}
