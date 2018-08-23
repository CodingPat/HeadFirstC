#include <string.h>
#include "strip.h"


void strip_linefeed(char search_for[]){
	char *c=strchr(search_for,'\n');
		if (c){
			*c=0;
		}

}
