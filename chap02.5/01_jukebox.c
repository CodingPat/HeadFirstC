#include <stdio.h>
#include <string.h>



void find_track(char search_for[]){
	for(i==0;i<5;i++){
		if (strstr(tracks[i],search_for)){
			printf("Track[%i] : %s",i,tracks[i]);
		}	
	}

}

char tracks[][80]={
"I left my heart in Harvar med school",
"Newark,Newart a wonderful town",
"Dancing with a dork",
"From here to maternity",
"The girl from Iwo Jima"
};

int main(){
	printf("size array : %i\n",sizeof(tracks));
	for(int i=0;i<5;i++){
		printf("tracks[%i][]  : %s \n",i,tracks[i]);
	}
	return(0);
}
