#include <iostream>
#include <stdio.h>
using namespace std;

//Napisz program obliczający rangę k-elementowego podzbioru T zbioru {1, . . . , n} w uporządkowaniu
//antyleksykograficznym podzbiorów k-elementowych.

int main() {
	
int Newton[20][20], q=19;

	for(int i=0;i<q;i++){
  		for(int j=0;j<q;j++){
  			if (i<j) Newton[i][j]=0;
  			else if(i==j || i==0 || j==0) Newton[i][j]=1;
  			else Newton[i][j] = Newton[i-1][j-1] + Newton[i-1][j];
  		}
	}
	
int k, r;
// warto zauważyć, że ranga w tym uporzadkowaniu jest niezależna od alfabetu, wiec nie trzeba czytać n

scanf("%d", &k);
	
int *T = new int[k+2];

for(int i=1; i<=k; i++){
	scanf("%d", &T[i]);
}

r=0;
for(int i=1;i<=k;i++){
	r+=Newton[T[i]-1][k-i+1];
}
	
printf("%d", r);
	return 0;
}
