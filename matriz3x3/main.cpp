#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main ()
{		
		int i,j;
		float mat1 [3][3], mat2 [3][3], resultados[3][3], valor, acumulador;
		
		//LLENADO DE PRIMER MATRIZ
		cout<<"Ingresa tus valores a la primer matriz\n";
		for (i=0; i<3; i++)
		{
				for (j=0; j<3; j++){
					cin>> mat1[i][j];
				}
		}
		
		//LLENADO DE SEGUNDA MATRIZ
		printf("Ingresa tus valores a la segunda matriz\n");
		for (i=0; i<3; i++)
		{
				for (j=0; j<3; j++){
					scanf("%f", &mat2[i][j]);
				}
		}
		
		//MULTIPLICACION
	    int k=0, l=0; i=0; 
		do{
			
				for (j=0; j<3; j++){	
						valor = mat1[i][j] * mat2[j][k];
						acumulador=acumulador + valor;
				}
				resultados[i][l] = acumulador;
				acumulador=0;
				i++;
				if(i == 3){
						i=0;
						l++;
						k++;
				}
						
				
		}while(k < 3);
			
		
		//MOSTRAR RESULTADOS
		for (i=0; i<3; i++)		{
				printf("[");
				for (j=0; j<3; j++)				{
						printf("%.2f ", mat1[i][j]);
					
				}
				if(i == 1)
						printf("]  x  [");
				else
						printf("]     [");
				for (j=0; j<3; j++)				{
						printf("%.2f ", mat2[i][j]);
				}
				if(i == 1)
						printf("]  =  [");
				else
						printf("]     [");
				for (j=0; j<3; j++)				{
						printf("%.2f ", resultados[i][j]);
				}
				printf("]\n");
		}
					
}

