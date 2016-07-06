#include<stdio.h>
#include<stdlib.h>

#define MAXSIZE 5

void binary_search( int * array, int key,int low, int high,int mid);

int main(){
	
	int array[MAXSIZE], i,key, mid=0,count=0,low, high;
	printf("Enter the array elements\n");
	
    for ( i =0; i<=MAXSIZE-1; i++){
		scanf("%d",&array[i]);
		count++;
	}	
	
		
	printf ("Enter the key to be searched\n");
	scanf("%d",&key);
	low= 0;
	high = count-1;
	mid = (low+high)/2;
	binary_search( array, key,low,high,mid);
	
}

void binary_search( int * array, int key,int low, int high, int mid){
	
	 printf ("Searching..........\n");
	
	  if( key == array[mid]){
		
		printf("Element found  It is at position %d\n",mid);
		exit(0);
		
	  }
	  else{
		 
		if ( key > array[mid]){
			printf ("Key is greater than mid\n");
			
			low = mid+1;
			mid = (low+high)/2;
			binary_search(array,key,low,high,mid);
			
			
		}
		
		else if ( key < array[mid]){
			printf ("Key is lesser than mid\n");
			
			high = mid-1;
			mid = (low+high)/2;
			binary_search(array,key,low,high,mid);
			
		}
		
		
	  }
	
	
	
}
