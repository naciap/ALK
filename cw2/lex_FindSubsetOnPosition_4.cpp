#include <iostream>
#include <stdio.h> 
#include <math.h>

using namespace std;

/*Napisz program wyznaczający podzbiór T o zadanej pozycji r w uporządkowaniu leksykograficznym 
(według wektorów charakterystycznych) podzbiorów zbioru{1,...,n}.*/

bool* decimalToBinaryConversion(int number, int n){
	number--; //first index=0
	bool *binarySubset=new bool[n+1];
	for(int i=0;i<n;i++){
		binarySubset[i]=0;
	}
	n--;
	while(number!=1){
		if(number%2==1){
			binarySubset[n]=1;
		}
		n--;
		number/=2;
	}
	binarySubset[n]=1;
	
	return binarySubset;
}

void printSet (bool *binarySubset, int n) {
	printf("{");
	int flag=0;
	for(int i=0; i<n; i++){
		if(binarySubset[i]==1){
			if (flag==0){
				printf("%d", i+1);
				flag=1;
			}
			else printf(" %d", i+1);
		}
	}	
	printf("}\n");	
}

int main() {
	
	int position, n;
	scanf("%d %d", &position, &n);

	printSet(decimalToBinaryConversion(position, n), n);
	
	return 0;
}
