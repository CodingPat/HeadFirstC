#include <stdlib.h>
#include <stdio.h>

int main(){

	int nr_decks=0;

	printf("Number of decks ? : ");
	scanf("%i",&nr_decks);
	if (nr_decks<1){
		puts("Error #decks");
		exit(1); 		
	}
	else{
		printf("Number of cards : %i\n",nr_decks*52);
	}
	exit(0);
}

