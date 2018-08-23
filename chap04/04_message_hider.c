#include <stdio.h>
#include "03_encrypt.h"
#include "../tools/strip.h"



int main(){

	char msg[80];
	printf("Type msg to be encrypted (CTRL+D to end)\n");
	
	while (fgets(msg,80,stdin)){
		strip_linefeed(msg);
		encrypt(msg);
		printf("%s\n",msg);
		
	}
	


}
