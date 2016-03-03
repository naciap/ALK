#include <iostream>
#include <stdio.h> 
#include <math.h>

using namespace std;

/* Napisz program obliczający pozycję podzbioru T ⊂{1,...,n} (o mocy l) w uporządkowaniu leksykograficznym (według wektorów charakterystycznych) podzbiorów zbioru 
{1,...,n} */

bool* subsetBijection(int *A, int length, int n){
	bool *tab = new bool[n+1];
	for(int i=1;i<=n;i++){
		tab[i]=0;
	}
	tab[0]=-1;
	
	for(int i=0; i<length; i++){
		tab[A[i]]=1;
	}
	
	return tab;
	delete[] tab;
}

void binaryToIntConversion(bool *A, int n){
	int s=0;
	for(int i=1; i<=n; i++){
		if(A[i]!=0){
			s+=pow(2, i-1);
		}
	}
	printf("%d", s);
}


int main() {
	
	int length, n;
	scanf("%d %d", &length, &n);
	
	int *subset = new int[length];
	bool *binarySubset=new bool[n+1];
	
	for(int i=0; i<length; i++){
		scanf("%d", &subset[i]);
	}
	
	binaryToIntConversion(binarySubset = subsetBijection(subset, length, n), n);
	
	return 0;
}
