#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
	
		int key = 58, k =0,i, fd,no_of_bytes_read =0,iterate=0;
		char * temp,* buf;
		temp = malloc(2);
		//temp[1]='\0';
		
		buf = malloc(7);
		fd = open("/Users/harishchakravarti/data.txt",O_RDONLY);
		
		if( fd == -1){
		  printf ("File was  not opened\n");
		  exit(0);
		}
		else {
		  lseek (fd, 0,0);
		
		  while ( k != key ) {
			
				while (temp[0] != '\n'){
				 	 no_of_bytes_read = read(fd,temp,1);
				     if ( no_of_bytes_read == 0 ){
					   
					   printf("The key is NOT found in the file\n");
					   exit(0);    
					
					 }
				     iterate += no_of_bytes_read;
				     if ( temp[0] != '\n'){
					   // printf("the new character is not a newline character\n");
					    //printf("the character read is %c\n",*temp);
				     	buf[i++] = temp[0];
				     }
				     lseek(fd,iterate,0);
				    
				}
			buf[i] = '\0';
		   // printf("ret = %lld\n",ret);
			//printf("%s\n",buf);
			k = atoi(buf);
			//printf ( "value of k = %d\n",k);
			if ( k == key){
				printf("The key %d is found  in the file\n",key);
				exit(0);
				
			}
			i=0;
			temp[0]= '\0';
			//temp[1]= '\0';
			 
			
			
		}
	
	   
	}
	
}
