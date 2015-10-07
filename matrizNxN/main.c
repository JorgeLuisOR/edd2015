#include <stdio.h>
#include <stdlib.h>


int main ()
{		
		int i,j, col, fil;
		
		printf("¿De que tamaño seran tus matrices? (Ingresa 2 valores)\n");
		scanf("%d %d", &col, &fil);
		
		if(fil > col){
				printf("Las filas superan las columnas, no se realiza la matriz\n");
				return 0;
		}
		
		float mat1 [col][fil], mat2 [col][fil], resultados[col][fil], valor, acumulador;
		//LLENADO DE PRIMER MATRIZ
		printf("Ingresa tus valores a la primer matriz\n");
		for (i=0; i<col; i++)
		{
				for (j=0; j<fil; j++){
					scanf("%f", &mat1[i][j]);
				}
		}
		
		//LLENADO DE SEGUNDA MATRIZ
		printf("Ingresa tus valores a la segunda matriz\n");
		for (i=0; i<col; i++)
		{
				for (j=0; j<fil; j++){
					scanf("%f", &mat2[i][j]);
				}
		}
		
		//MULTIPLICACION
	    int k=0, l=0; i=0; 
		do{
			
				for (j=0; j<fil; j++){	
						valor = mat1[i][j] * mat2[j][k];
						acumulador=acumulador + valor;
				}
				resultados[i][l] = acumulador;
				acumulador=0;
				i++;
				if(i == col){
						i=0;
						l++;
						k++;
				}
						
				
		}while(k < fil);
			
		
		//MOSTRAR RESULTADOS
		for (i=0; i<col; i++)		{
				printf("[");
				for (j=0; j<fil; j++)				{
						printf("%.2f ", mat1[i][j]);
					
				}
				if(i == fil/2)
						printf("]  x  [");
				else
						printf("]     [");
				for (j=0; j<fil; j++)				{
						printf("%.2f ", mat2[i][j]);
				}
				if(i == fil/2)
						printf("]  =  [");
				else
						printf("]     [");
				for (j=0; j<fil; j++)				{
						printf("%.2f ", resultados[i][j]);
				}
				printf("]\n");
		}
					
		
		return 0;
}

