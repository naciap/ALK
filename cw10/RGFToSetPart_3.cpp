#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	int n, i, j, A[20][20], idx[20];
	
	scanf("%d", &n);
	int *f = new int[n+2];
	
	for(i=1; i<=n; i++){
		scanf("%d", &f[i]);
	}
	
	for(i=1; i<=n; i++){
		for(j=1; j<=n; j++){
			A[i][j]=0;
		}
	}

	for(j=1; j<=n; j++){
		idx[j]=1;
	}
	
	for(j=1; j<=n; j++){
		A[idx[f[j]]][f[j]]=j;
		idx[f[j]]++;
	}
	
	for(i=1;i<=n; i++){
		printf("{");
		for(j=1; j<=n; j++){
			if(A[j][i]!=0) printf("%d ", A[j][i]);
		}
		printf("}");
	}
	
	return 0;
}
