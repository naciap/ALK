#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	
	int m, i, j;
	bool done;
	scanf("%d", &m);
	
	int *f = new int[m+2];
	int *fmax = new int[m+2];

	for(int i=1; i<=m; i++){
		f[i]=1;
		fmax[i]=2;
	}
	done=false;
	while(!done){
		for(int i=1; i<=m; i++){
			printf("%d ", f[i]);
		}
		printf("\n");
		j=m+1;
		do{
			j--;
		}
		while(f[j]==fmax[j]);
		if(j>1){
			f[j]++;
			for(int q=j+1; q<=m; q++){
				f[q]=1;
				if(f[j]==fmax[j]){
					fmax[q]=fmax[j]+1;
				}
				else{
					fmax[q]=fmax[j];
				}
			}
		}
		else done=true;
	}
	
	return 0;
}
