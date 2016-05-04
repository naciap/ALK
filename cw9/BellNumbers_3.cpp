#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
int Newton[20][20], q=19;

	for(int i=0;i<q;i++){
  		for(int j=0;j<q;j++){
  			if (i<j) Newton[i][j]=0;
  			else if(i==j || i==0 || j==0) Newton[i][j]=1;
  			else Newton[i][j] = Newton[i-1][j-1] + Newton[i-1][j];
  		}
	}
	
	
int Bell[13];
Bell[0]=1;
int s=0;

for(int i=1; i<13; i++ ){
	s=0;
	for(int j=0; j<i; j++){
		  s+=Newton[i-1][j]*Bell[j];
	}
	  Bell[i]=s;
}
	
	for(int i=0; i<13; i++){
	  	printf("%d ", Bell[i]);
	}
	return 0;
}
