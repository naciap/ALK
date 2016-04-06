#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
int n, k;

scanf("%d %d", &n, &k);

int *T = new int[k+2];

for(int i=1; i<=k; i++){
	scanf("%d", &T[i]);
}

T[0]=n+1;
int i=k;
while (i>0 && T[i]==T[i-1]-1){
	i--;
}
if(i==0) {
	printf("Brak nastepnika");
	return 0;}
T[i]=T[i]+1;
for(int j=i+1; i<=k; i++){
	T[j]=k-j+1;
}

for(i=1;i<=k;i++){
	printf("%d ", T[i]);
}
	
	return 0;
}
