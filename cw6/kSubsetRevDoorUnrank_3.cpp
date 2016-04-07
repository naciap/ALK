#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
	
int Newton[20][20], q=19;

for(int i=0;i<q;i++){
		for(int j=0;j<q;j++){
			if (i<j) Newton[i][j]=0;
			else if(i==j || i==0 || j==0) Newton[i][j]=1;
			else Newton[i][j] = Newton[i-1][j-1] + Newton[i-1][j];
		}
}

	
int n, k, r, s;
	
scanf("%d %d %d", &n, &k, &r);
	
int *T = new int[k+2];

int x=n;
for(int i=k;i>0;i--){
	while(Newton[x][i]>r){
		x--;
	}
	T[i]=x+1;
	r=Newton[x+1][i]-r-1;
}

for(int i=1;i<=k;i++){
	printf("%d ", T[i]);
}

	return 0;
}
