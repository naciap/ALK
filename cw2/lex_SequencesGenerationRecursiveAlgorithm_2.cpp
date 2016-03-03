#include <iostream>
#include <stdio.h> 
#include <math.h>

using namespace std;

void sequencesGenerator(int time, int length, int alphabet, int *tab){
	if(time==length){
		for(int i=1; i<=length; i++){
			printf("%d ", tab[i]);
		}
		printf("\n");
	}
	else{
		for(int i=1; i<=alphabet; i++){
			tab[++time]=i;
			sequencesGenerator(time, length, alphabet, tab);
			time--;
		}
	}

}

int main() {
	
	int length, alphabet, time=0;
	
	scanf("%d %d", &length, &alphabet);
	
	int *tab = new int[length+1];
	
	sequencesGenerator(time, length, alphabet, tab);
	
	return 0;
}
