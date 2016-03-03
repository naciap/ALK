#include <iostream>
#include <stdio.h> 
#include <math.h>

using namespace std;

/* Napisz program generujący wszystkie podzbiory zbioru {1, 2, . . . , k}, wykorzystując bijekcję
między ciągami binarnymi długości k a tymi podzbiorami. */


void printSet (int *A, int n) {
	printf("{");
	int flag=0;
	for(int i=1; i<=n; i++){
		if(A[i]==1){
			if (flag==0){
				printf("%d", i);
				flag=1;
			}
			else printf(" %d", i);
		}
	}	
	printf("}\n");	
} 


int main() {
	
	int k, n=1;
	
	scanf("%d", &k);

	int *tab=new int[k+2];
	
	tab[0]=-1;
	for(int i=1;i<=k;i++){
		tab[i]=0;
	}

	printSet(tab, k);
		
	int s=k;
	do{
		s=k;
		while(s>=1 && tab[s]==n){
			s--;
		}
		
		if(s>=1){
			tab[s]++;
			
		  for(int j=s+1; j<=k; j++){
				tab[j]=0;
			}
			
			printSet(tab, k);
		}
		
		else break;
	}
	while(s>=1);

	delete[] tab;
	
	return 0;
}
