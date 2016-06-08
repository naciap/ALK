#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	
	int E[20][2], d[20], L[20];
	int n, x, y;
	
	scanf("%d", &n);
	for(int i=1; i<=n-2;  i++){
		scanf("%d", &L[i]);
	}
	
	L[n-1] = 1;
	
	for(int i=1; i<=n; i++){
		d[i] = 1;
	}
	
	for(int i = 1; i <= n-2; i++){
		d[L[i]]++;
	}
	
	for(int i = 1; i <= n-1; i++){
		x=n;
		while(d[x] != 1){
			x--;
		}
		y=L[i];
		d[x]--;
		d[y]--;
		E[i][0] = x;
		E[i][1] = y;
		}
	
	for(int i = 1; i<=n-1; i++){
		printf("{%d %d} \n", E[i][0], E[i][1]);
	}
	
	
	return 0;
}
