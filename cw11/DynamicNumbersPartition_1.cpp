#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	int n, k, tab[20][20]={0};
	
	tab[0][0]=1;
	
	for(int i=1; i<20; i++){
		for(int j=i; j<20; j++){
			tab[j][i]=tab[j-1][i-1]+tab[j-i][i];
		}
	}
	
	scanf("%d %d", &n, &k);
	printf("%d ", tab[n][k]);
	
	return 0;
}
