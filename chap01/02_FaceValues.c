#include <stdlib.h>
#include <stdio.h>

int main(){
	char card_name[3];
	int val=0;
	printf("Enter the card name : ");
	scanf("%2s",card_name);
	
	if ((card_name[0]=='K')||(card_name[0]=='Q')||(card_name[0]=='J')){
		val=10;
	 }
	else if (card_name[0]=='A'){
		val=11;
	}
	else{
		val=atoi(card_name);
	}

	printf("The value of the card is : %i\n",val);

	exit(0);
}


