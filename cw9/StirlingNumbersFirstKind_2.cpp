#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	int S[13][13];
	
	S[0][0]=1;
	for(int i=0; i<12; i++){
		  if(i>0) S[i][0]=0;
		  S[i][i+1]=0;
	}
	
	for(int i=1; i<12; i++){
	  	for(int j=1; j<=i+1; j++){
		  	S[i][j]=S[i-1][j-1]-(i-1)*S[i-1][j];
			  if(j==i+1) S[i][j]=0;
		  }
	}
	
	for(int i=0;i<12;i++){
	  	for(int j=0;j<=i;j++){
		  	printf("%d ", S[i][j]);
		  }
		  printf("\n");
	}
	
	
	return 0;
}
