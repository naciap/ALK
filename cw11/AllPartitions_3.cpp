#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

void PODZIAL(int *a, int n, int b, int m){
if(n==0){
	for(int i=1; i<=m; i++){
		printf("%d ", a[i]);
	}
	printf("\n");
}	
else{
	for(int i=1; i<=min(b,n); i++){
		a[m+1]=i;
		PODZIAL(a, n-i, i, m+1);
	}
}

}
int main() {
	
	int n;
	scanf("%d", &n);
	
	int *a=new int[n+2];
	
	PODZIAL(a, n, n, 0 );
	
	return 0;
}
