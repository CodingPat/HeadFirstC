#include <stdio.h>


struct exercise {
	const char* description;
	float duration;
};

struct meal{
	const char* ingredients;
	float weight;

};

struct preferences{
	struct meal food;
	struct exercise exercise;

};


struct fish {
	const char* name;
	const char* species;
	int teeth;
	int age;
	struct preferences care; 
};


void catalog(struct fish f){
	printf("%s is a %s with %i teeth and %i years old\n",f.name,f.species,f.teeth,f.age);
	
}

void label(struct fish f){
	printf("======= LABEL =========\n");
	printf("Name : %s\n",f.name);
	printf("Species : %s\n",f.species);
	printf("Food ingredients: %s\n",f.care.food.ingredients);
	printf("Food weight: %2.2f\n",f.care.food.weight);
	printf("Exercise description: %s\n",f.care.exercise.description);
	printf("Exercise duration: %2.2f\n",f.care.exercise.duration);
	


}
int main(){

	struct fish snappy={"Snappy","Piranha",69,4,{{"meat",0.2},{"Swim in the jacuzzi",7.5}}};
	catalog(snappy);
	label(snappy);
	return 0;


}
