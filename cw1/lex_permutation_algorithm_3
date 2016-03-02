#include<stdio.h>
#include<iostream>

/* Napisz program generujący wszystkie zbudowane z dodatnich liczb naturalnych ciągi długości
k, w których i-ty wyraz jest nie większy od i dla i = 1, 2, . . . , k. */


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
		while(s>=1 && tab[s]==s){
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
	
