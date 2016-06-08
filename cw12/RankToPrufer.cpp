#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	int n, r, L[20];
	
	scanf("%d", &n);
	scanf("%d", &r);
	
	for(int i=n-2; i>=1; i--){
		L[i]=(r%n)+1;
		r=(r-L[i]+1)/n;
	}
	
	for(int i=1; i<=n-2; i++){
		printf("%d ", L[i]);
	}
	
	return 0;
}
