#include <stdio.h>

int a[4]={4,1,7,2};
int n=4;
int i,j,aux;
int main(){
	
	printf("Arreglo desordenado \n");
	
	for(i=0;i<4;i++){
		printf(" %d",a[i]);
	}
	printf("\n");

	for(i=1;i<n;i++){
		j=i;
		aux=a[i];
		while(j>0 && aux<a[j-1]){
			a[j]=a[j-1];
			j--;
		}
			a[j]=aux;
	}

	printf("Arreglo Ordenado \n");
	
	for(i=0;i<4;i++){
		printf(" %d",a[i]);
	}
	
	printf("\n");
	
	return 0;
}
