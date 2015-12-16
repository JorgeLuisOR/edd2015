#include <stdlib.h>
#include <stdio.h>

void mergesort(int *v, int i, int f);
void merge(int *v, int i, int m, int f);

int main() {
	int *v, n;
	printf("Ingrese N: ");
	scanf("%d", &n);
	
	v = new int[n];
	for(int i=0; i<n; i++) {
		printf("Elemento %d: ", i+1);
		scanf("%d", &v[i]);
	}
	
	mergesort(v, 0, n-1);
	
	for(int i=0; i<n; i++)
		printf("%d ", v[i]);
	
	return 0;
}

void mergesort(int *v, int i, int f) {
	if(i!=f) {
		int m = (i+f)/2;
		mergesort(v, i, m);
		mergesort(v, m+1, f);
		merge(v, i, m, f);
	}
}

void merge(int *v, int i, int m, int f) {
	int *aux = new int[m-i+1];
	for(int j=i; j<=m; j++)
		aux[j-i] = v[j];
	
	int c1=0, c2=m+1;
	for(int j=i; j<=f; j++) {
		if(aux[c1] < v[c2]) {
			v[j] = aux[c1++];
			if(c1==m-i+1)
				for(int k=c2; k<=f; k++)
					v[++j] = v[k];
		}
		else {
			v[j] = v[c2++];
			if(c2==f+1)
				for(int k=c1; k<=m-i; k++)
					v[++j] = aux[k];
		}
	}
	
}
