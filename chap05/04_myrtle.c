#include <stdio.h>

typedef struct{
	const char* name;
	const char* species;
	int age;
}turtle;


void happy_birthday(turtle *t){
	t->age=t->age+1;
	printf("Happy birthday %s, you're now %i years old !\n",t->name,t->age);	
}


int main(){
	turtle myrtle={"Myrtle","Leatherback sea turtle",99};
	happy_birthday(&myrtle);
	printf("Your age is now : %i\n",myrtle.age);
}

