#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
	char line[80];

	FILE *in=fopen("spooky.csv","r");
	FILE *f_ufo=fopen("ufo.csv","w");
	FILE *f_disap=fopen("disappearance.csv","w");
	FILE *f_other=fopen("other.csv","w");


	while(scanf("%79[^\n]\n",line)==1){

		if(strstr(line,"UFO")){
			fprintf(f_ufo,"%s\n",line);

		}
		else if (strstr(line,"Disappearance")){
			fprintf(f_disap,"%s\n",line);

		}
		else{
						fprintf(f_other,"%s\n",line);

		}
		
	}

	fclose(in);
	fclose(f_ufo);
	fclose(f_disap);
	fclose(f_other);

	return 0;
}
