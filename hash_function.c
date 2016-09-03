#include <stdio.h>
#include <stdlib.h>

unsigned hash(char * string);

int main(){
	
	char * input = malloc (100);
	int hash_value;
	printf("Enter the string you want to insert\n");
	gets(input);
	hash_value = hash(input);
	
	printf("hash-value=%d\n",hash_value);

}


unsigned hash(char * string){
	
	unsigned hashval;
	
	for ( hashval =0; *string != '\0'; string++ ){
		
	   printf("the value of letter = %d\n",*string);
	   hashval = *string + 31 * hashval;
	
	}
		
	return hashval % 101;
	
}
