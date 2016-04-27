#include <iostream>
#include <stdio.h>
using namespace std;

long long silnia(int n){
	if (n==0) return 1;
	else return (n*silnia(n-1));
}

int main() {
	
	//rank
	
	int n;
	scanf("%d", &n);
	
	int *p = new int[n+2];
	
	for(int i=1; i<=n; i++){
		scanf("%d", &p[i]);
	}
	
	long long r=0;
	for(int j=1; j<=n; j++){
		r+=(p[j]-1)*silnia(n-j);
		for(int i=j+1; i<=n; i++){
			if(p[i]>p[j]){
				p[i]--;
				}
			}
		}
	
	printf("%lld", r);
	
	return 0;
}
