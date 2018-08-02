#include <stdlib.h>
#include <stdio.h>


int card_value(char card_name[]) {

	int val=0;
	switch(card_name[0]){
		case 'K':
		case 'Q':
		case 'J':
			val=10;
			break;
		case 'A':
			val=11;
			break;
		default:
			val=atoi(card_name);
			if (!(val>0 && val<11))
				val=0; //not a valid value
				
			
		}

		 return val;

}

int main(){
	char card_name[3];
	int val=0;
	int count=0;
	
	printf("Enter the card name : ");
	scanf("%2s",card_name);

	while (card_name[0]!='X'){

		if (val=card_value(card_name)){
			printf("The value of the card is : %i\n",val);
	
			if ((val>2)&&(val<7)){
				count+=1;
			}
			else if (val==10){
				count-=1;
			}
			printf("count: %i\n",count);		
		}
		else 
			printf("Not a valid card name\n");
	
	
		printf("Enter the card name : ");
		scanf("%2s",card_name);

		}

	printf("Total count = %i\n",count);
	

	exit(0);
}


