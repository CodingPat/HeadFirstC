#include <stdio.h>


int main(){

	float latitude, longitude;
	char info[80];
	int print_linefeed=0;

	puts("data=[");
	while(scanf("%f, %f, %79[^\n]",&latitude,&longitude,info)==3){

		if(print_linefeed){
			printf(",\n");
		}
		else {
			print_linefeed=0;
		}

		if(latitude<-90||latitude>90){
		printf("Invalid latitude : %f\n",latitude);
		return 2;
		}
		if(longitude<-180||longitude>180){
		printf("Invalid longitude : %f\n",longitude);
		return 2;
		}


		printf("{latitude: %f, longitude: %f, info: '%s'}\n",latitude,longitude,info);
		
	}

	puts("\n]");
	return 0;
	
	
}
