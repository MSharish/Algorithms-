#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void equalstrings( char * string1, char * string2);

int main(int argc, char *argv[]) {
	
	char * string1, *string2;
	string1 = malloc ( 100);
	string2 = malloc ( 100);
	printf("enter the string 1\n");
	gets(string1);
	printf("enter the second string\n");
	gets(string2);
	equalstrings(string1,string2);
	
}

void equalstrings( char * string1, char * string2){
	
	int string_length_one = strlen(string1), string_length_two = strlen(string2);
	char temp;
	
	int i = 0, k= 0, count =0,j;
	for ( i =0 ;i <= string_length_one-2; i++){
		
		for (j=i+1;j<=string_length_one-1;j++ ){
			
			if ( string1[i] > string1[j]){
				
				temp = string1[i];
				string1[i] = string1[j];
				string1[j] = temp;
			}
			
		}
		
	}
	for ( i =0 ;i <= string_length_two-2; i++){
		
		for (j=i+1;j<=string_length_two-1;j++ ){
			
			if ( string2[i] > string2[j]){
				
				temp = string2[i];
				string2[i] = string2[j];
				string2[j] = temp;
			}
			
		}
		
	}
	
	printf("%s\n",string1);
	printf("%s\n",string2);
	
	if ( strcmp(string1, string2) == 0)
	   printf("the two strings are equal\n");
	
	else {
		 printf("the two strings are not equal\n");
	}
	
}
