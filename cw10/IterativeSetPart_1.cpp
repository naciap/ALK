#include <iostream>
#include <stdio.h>
using namespace std;

void wypisz (int *B, int n) {
    bool tab[20];
    int i, j;
    for(i=1;i<=20;i++) tab[i]=false;
    for (int i=1;i<=n;i++) tab[B[i]]=true;
    for (int i=1;i<=n;i++) if (tab[i]) {
        printf("{ ");
        for (int j=1;j<=n;j++) if (B[j]==i) printf("%d ", j);
        printf("}");
    }
    printf("\n");
}

int main() {
	int n, i, j, k, B[20], N[20], P[20];
	bool PR[20];
	scanf("%d", &n);
	
	for(i=1; i<=n; i++){
		B[i]=1;
		PR[i]=true;
	}
	N[1]=0;
	
	wypisz(B, n);
	
	j=n;
	while(j>1){
		k=B[j];
		if(PR[j]){
			if(N[k]==0){
				N[k]=j;
				N[j]=0;
				P[j]=k;
			}
			if(N[k]>j){
				P[j]=k;
				N[j]=N[k];
				P[N[j]]=j;
				N[k]=j;
			}
			B[j]=N[k];
		}
		else{
			B[j]=P[k];
			if(k==j){
				if(N[k]==0){
					N[P[k]]=0;
				}
				else{
					N[P[k]]=N[k];
					P[N[k]]=P[k];
				}
			}
		}
		wypisz(B, n);
		j=n;
	
	while ((j>1 && PR[j] && (B[j])==j)||!(PR[j]&&(B[j]==1))){
		PR[j]=!PR[j];
		j--;
	}
	}
	return 0;
}
