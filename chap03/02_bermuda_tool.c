#include <stdio.h>

int main(){
	float latitude;
	float longitude;
	char info[80];
	while(scanf("&latitude,&longitude,%79[^\n]")==3){
		if ((latitude>=26)&&(latitude<=34)){
			if((longitude<=34)&&(longitude>=-64)){
			
				printf("%f, %f, %s",&latitude,&longitude,info);
			}

		}

	}


	return 0;
}
