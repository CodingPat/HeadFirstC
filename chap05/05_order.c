#include <stdio.h>

typedef enum unit{
	COUNT,
	POUNDS,
	PINTS
} unit;

typedef union quantity{
	short count;
	float weight;
	float volume;
} quantity;

typedef struct order{
	const char *name;
	const char *country;
	quantity amount;
	unit unit;
} order;

void display(order *order){
	printf("This order contains : ");
	switch(order->unit){
		case COUNT:
			printf("%i %s\n",order->amount.count,order->name);
			break;

		case POUNDS:
			printf("%2.2f pounds of %s\n",order->amount.weight,order->name);
			break;

		case PINTS:
			printf("%2.2f pints of %s\n",order->amount.volume,order->name);
			break;

	}

}

int main(){

	order apples={"apples","England",.amount.count=144,COUNT};
	order strawberries={"strawberries","Spain",.amount.weight=17.6,POUNDS};
	order orange_juice={"orange juice","USA",.amount.volume=10.5,PINTS};

	display(&apples);
	display(&strawberries);
	display(&orange_juice);

	return 0;
	
		
}
