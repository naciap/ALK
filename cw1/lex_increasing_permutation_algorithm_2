#include<stdio.h>
#include<iostream>

/* zad.2 Napisz program generujący w porządku leksykograficznym wszystkie rosnące ciągi długości
k zbudowane z liczb od 1 do n (tzn. pierwszy ciąg to (1, 2, . . . , k), a ostatni to (n − k +
1, . . . , n − 1, n)). */

int main(){
	
	int k, n;
	
	scanf("%d %d", &k, &n);
	
	int *tab = new int[k+2];
	
	tab[0]=0;
	for(int i=1;i<=k;i++){
		tab[i]=i;
	}
	
	for(int i=1; i<=k; i++){
		printf("%d ", tab[i]);
	}
	printf("\n");
	
	int s=k;
	do{
		s=k;
		while(s>=1 && tab[s]+k-s==n){
			s--;
		}
		if(s>=1){
			tab[s]++;
		
			for(int j=s+1; j<=k; j++){
				tab[j]=tab[j-1]+1;
			}
			
			for(int i=1; i<=k; i++){
				printf("%d ", tab[i]);
			}
			
			printf("\n");
		}
		
		else break;
	}
	while(s>=1);
		
return 0;
}
	
	

