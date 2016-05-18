#include <iostream>
#include <stdio.h>
#include <string>
#include <string.h>

using namespace std;

int main() {
	int n, i, j, a;
	char a1;
	int m; //liczba zbiorów
	scanf("%d %d", &n, &m);
	
	//funkcja
	int *f = new int[n+2];

	// tablica set przyporzadkowuje każdemu elementowi numer zbioru, 
	// do którego należy
	int *set = new int[n+2];
	
	for(i=1; i<=n; i++) set[i]=0;
	
	// wczytywanie zbiorow - prosze wczytac kazdy zbior w oddzielnej linii, w formacie { a a a }
	
	for(i=1; i<=m; i++){
		a1='0';
		while(a1!='}'){
			scanf("%c ", &a1);
			if(a1!='{'&& a1!='}' && a1!=10){
				a = a1-'0';
				set[a]=i;
				//printf("%d ", a);
			}
		}
	}
	
//	for(i=1; i<=n; i++){ printf("%d ", set[i]);}

	for (j=1; j<=n; j++){
		f[j]=0;
	}
	j=1, i=1;
	for(int i=1; i<=n; i++){
		while(f[j]!=0){
			j++;
		}
		int h=set[j];
		for(int q=1; q<=n; q++){
			if(set[q]==h) f[q]=i;
		}
	}
	
	for(i=1; i<=n; i++){
		printf("%d ", f[i]);
	} 
	
	return 0;
}
