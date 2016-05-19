#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	int n;
	
	scanf("%d", &n);

	int *part = new int [n+2];
	int *conj = new int [n+2];
	
	for(int=0; i<n; i++){
		conj[i]=0;
	}
	
	for(int i=0; i<n; i++){
		scanf("%d", &part[i]);
	}
	
	int max=part[0];
	
	for(int i=1; i<n; i++){
		if(part[i]>max) max=part[i];
	}
	
	int idx=0;
	while(max){
		for(int i=0; i<n; i++){
			if(part[i]){
				conj[idx]++;
				part[i]--;
			}
		}
		
		max--;
		idx++;
	}
	for(int i=0; i<idx; i++){
		printf("%d ", conj[i]);
	}
	
	return 0;
}
