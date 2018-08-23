#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(){
	printf("The maximum value of short is :%i\n",SHRT_MAX);
	printf("The minimum value of short is :%i\n",SHRT_MIN);
	printf("A short takes %i bytes\n",sizeof(short));

	printf("The maximum value of char is :%i\n",CHAR_MAX);
	printf("The minimum value of char is :%i\n",CHAR_MIN);
	printf("A char takes %i bytes\n",sizeof(char));

	printf("The maximum value of int is :%i\n",INT_MAX);
	printf("The minimum value of int is :%i\n",INT_MIN);
	printf("A int takes %i bytes\n",sizeof(int));

	printf("The maximum value of long is :%ld\n",LONG_MAX);
	printf("The minimum value of long is :%ld\n",LONG_MIN);
	printf("A long takes %i bytes\n",sizeof(long));


	printf("The maximum value of float is :%f\n",FLT_MAX);
	printf("The minimum value of int is :%.50f\n",FLT_MIN);
	printf("A float takes %i bytes\n",sizeof(float));

	printf("The maximum value of double is :%f\n",DBL_MAX);
	printf("The minimum value of double is :%.50f\n",DBL_MIN);
	printf("A double takes %i bytes\n",sizeof(double));

	return 0;

	
}
