#include<stdio.h>
#include<string.h>

int hash_table[256];

int eveluate_string(char * string);

int main(){

        char string[256];
        printf("Enter the string to be evaluated\n");
        scanf("%s",string);
        if ( eveluate_string(string) == 1 )
            printf("duplicate charcters are found\n");
        else
           printf("duplicate chracters are not found or string was not entered by the user  \n");

}

int eveluate_string(char string[]){

        int ch;
        int i = 0;
        int duplicate_flag = 0;
        int length = strlen(string);
        if (strlen(string)== 0) {
           printf("No string was entered by the user\n");
           return 0;
         }

        else{

           while(length >= 0 ) {
                ch  = string[i];
                if ( hash_table[ch] == 0 )
                     hash_table[ch]++;
                else{

                   duplicate_flag = 1;
               }
              i++;
              length--;
           }

         if (duplicate_flag )
            return 1;
         else
          return 0;
       }

}
