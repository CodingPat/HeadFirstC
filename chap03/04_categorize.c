#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc,char *argv[]){
	char line[80];

	if (argc!=6){
		fprintf(stderr,"5 arguments needed !\n");
		return 1;
	}



	FILE *in;

	if (!(in=fopen("spooky.csv","r"))){
		fprintf(stderr,"Can't open input file !\n");
		return 1;		
	}
	FILE *f1=fopen(argv[2],"w");
	FILE *f2=fopen(argv[4],"w");
	FILE *f3=fopen(argv[5],"w");


	while(fscanf(in,"%79[^\n]\n",line)==1){

		if(strstr(line,argv[1])){
			fprintf(f1,"%s\n",line);

		}
		else if (strstr(line,argv[3])){
			fprintf(f2,"%s\n",line);

		}
		else{
			fprintf(f3,"%s\n",line);

		}
		
	}

	fclose(in);
	fclose(f1);
	fclose(f2);
	fclose(f3);

	return 0;
}
