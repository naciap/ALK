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
	
scanf("%d %d", &n, &k);
	
int *T = new int[k+2];

for(int i=1; i<=k; i++){
  scanf("%d", &T[i]);
}
	
	
if(k%2==0) r=0;
else r=-1;

s=1;

for(int i=k;i>0;i--){
	r+=s*Newton[T[i]][i];
	s*=-1;
}

printf("%d", r);
	
	return 0;
}
