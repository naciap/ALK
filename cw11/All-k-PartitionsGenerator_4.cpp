#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

void PODZIAL(int *a, int n, int b, int m, int max){
    if (n == 0) {
            if (a[0] == max) {

                int count = 0, p[22], ps[22];
                
                for(int i=0; i<22; i++) p[i]=0;
                for(int i=0; i<22; i++) ps[i]=0;
                
                for (int i = 0; i<m; i++) {
                    p[i] = a[i];
                }
                
                while (max) {
                    for (int i=0; i<m; i++) {
                        if (p[i] > 0) {
                            p[i]--;
                            ps[count]++;
                            
                        }
                    }
                    count++;
                    max--;
                }

                for (int i=0; i<count; i++) {
                    printf("%d ", ps[i]);
                }
                printf("\n");

        }
    } else {
        for (int i=1; i<=min(n, b); i++){
            a[m]=i;
            PODZIAL(a, n-i, i, m+1, max);
        }
    }
}

int main() {

    int tab[22], n, k;

    scanf("%d %d", &n, &k);

    PODZIAL(tab, n, k, 0, k);

    return 0;
}

