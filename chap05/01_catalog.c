#include <stdio.h>

struct fish {
	const char* name;
	const char* species;
	int teeth;
	int age;
};

void catalog(struct fish f){
	printf("%s is a %s with %i teeth and %i years old\n",f.name,f.species,f.teeth,f.age);
	
}

void label(struct fish f){
	printf("======= LABEL =========\n");
	printf("Name : %s\n",f.name);
	printf("Species : %s\n",f.species);
	printf("Comment : %i years old, %i teeth\n",f.age,f.teeth);
	


}
int main(){

	struct fish snappy={"Snappy","Piranha",69,4};
	catalog(snappy);
	label(snappy);
	return 0;


}
