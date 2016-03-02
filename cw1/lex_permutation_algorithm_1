#include<stdio.h>
#include<iostream>

/* Napisz program generujący w porządku leksykograficznym wszystkie ciągi długości k zbudowane 
z liczb od 1 do n (użyj algorytmu iteracyjnego). */

int main(){
	int k, n;
	
	scanf("%d %d", &k, &n);
	
	int *tab = new int[k+2];
	tab[0]=0;
	for(int i=1;i<=k;i++){
		tab[i]=1;
	}
	
	for(int i=1; i<=k; i++){
		printf("%d ", tab[i]);
	}
	printf("\n");
		
	int s=k;
	do{
		s=k;
		while(s>=1 && tab[s]==n){
			s--;
		}
		
		if(s>=1){
			tab[s]++;
		  
		  for(int j=s+1; j<=k; j++){
				tab[j]=1;
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
	
	

