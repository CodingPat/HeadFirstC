#include <stdio.h>

void go_south_east(int *latitude,int *longitude){
	*latitude=*latitude-1;
	*longitude=*longitude+1;
}

int main(){
	int latitude=32;
	int longitude=-64;
	go_south_east(&latitude,&longitude);
	printf("Now at [%i,%i]\n",latitude,longitude);

	return 0;
}
