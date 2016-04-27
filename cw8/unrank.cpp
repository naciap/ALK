#include <iostream>
#include <stdio.h>
using namespace std;

long long silnia(int n){
	if (n==0) return 1;
	else return (n*silnia(n-1));
}

int main() {
	//unrank
	
	int n, d;
	long long r;
	
	scanf("%d", &n);
	scanf("%d", &r);
	
	int *p = new int[n+2];
	
	p[n]=1;
	
	for(int j=1; j<n; j++){
		d=(r%silnia(j+1))/silnia(j);
		p[n-j]=d+1;
		for(int i=n-j+1; i<=n; i++){
			if(p[i]>=d+1){
				p[i]++;
			}
		}
	}
	
	for(int i=1; i<=n; i++){
		printf("%d ", p[i]);
	}
	return 0;
}
