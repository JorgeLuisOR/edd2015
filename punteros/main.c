#include <stdio.h>
#include <stdlib.h>

int main ()
{		int n, i=1, j;
		int *puntero;
		
		printf("Ingresa el tamaño del arreglo\n");
		scanf("%d", &n);
		
		puntero = (int *) malloc(n * sizeof(int));
		
		if (puntero == NULL)
				perror("ERROR");
		else
		{
				for(i=0; i< n; i++)
						puntero[i] = j= i+1;
				
				for(i=0; i< n; i++)
						printf(" %d,", puntero[i]);
	
				free(puntero);
		}
		return 0;
}
