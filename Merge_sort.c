#include<stdio.h>
#include<stdlib.h>

#define MAXSIZE 5

int * array = NULL;

void merge(int * array, int length);

void merge_sort(int * array,int *larray, int * rarray, int llen, int rlen);


int main(){
	
	int length=0, num, i =0;
	array =  malloc(MAXSIZE);
	
	printf("Enter the elements of the array\n");
	
	for ( i =0 ; i<= MAXSIZE-1; i++){
	  scanf("%d",&array[i]);
	  length++;
	}
	
	
	
	merge(array, length);
	printf("THE SORTED ARRAY IS\n");
		for( int k=0; k<= MAXSIZE-1;k++)
	printf("%d\t",array[k]);
	
}

void merge( int * array, int length){
	 int mid=0, * larray=NULL, * rarray=NULL, k=0,l=0, llen =0, rlen=0;
	 larray = malloc(length);
	 rarray = malloc(length);
	 if ( length <= 1){
		
	 } 
	 else{
	
	  mid = length/2;
	  for( int i=0; i<= mid-1; i++){
	   larray[k] = array[i]; 
	   //printf("%d\t",larray[k]);
	   k++;
	   llen++;
	  }
	  printf("\n");
	
	  for ( int i=mid; i<=length-1;i++){
	   rarray[l] = array[i];
	  // printf("%d\t",rarray[l]);
	   l++;
	   rlen++;
		
	 }
	 //printf("\n");
	 merge(larray,llen);	
	 merge(rarray,rlen);
	 merge_sort(array,larray, rarray, llen, rlen);
		
   }		
	
}

void merge_sort(int * array,int *larray, int * rarray, int llen, int rlen){
	
	int i=0,j=0,k=0;
	
	while( llen && rlen){
		
	 if( larray[j] < rarray[k]){
		
		array[i] = larray[j];
		j++;
		i++;
		llen--;
		
		
	}	
	
	else {
		array[i] = rarray[k];
		k++;
		i++;
		rlen--;
		
	}
	for( int h=0; h<= MAXSIZE-1;h++)
	  printf("%d\t", array[h]);
	
	printf("\n");
 }

   while(llen){
	
	array[i] = larray[j];
	i++;
	j++;
	llen--;
	
	
   }

   while( rlen){
	
	array[i] = rarray[k];
	i++;
	k++;
	rlen--;
	
	
   }
 
    
}
	
