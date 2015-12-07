#include <stdio.h>
#include "funciones.h"

enum Operaciones{
		SUMA = 1,
		RESTA = 2,
		MULTIPLICACION = 3,
		DIVISION = 4,
		SALIR = 5
};

void menu ()
{
		printf("1.- Suma\n");
		printf("2.- Resta\n");
		printf("3.- Multiplicacion\n");
		printf("4.- Division\n");
		printf("5.- Salir\n");
		printf("Elige una opcion: ");
}

void datos (float *param_1, float *param_2)
{
	float param;
	printf("Ingresa el primer numero: \n");
	scanf("%f", &param);
	*param_1= param;
	printf("Ingresa el segundo numero: \n");
	scanf("%f", &param);
	*param_2= param;
}

void impr_res (float resultado)
{
		printf("Tu resultado es %5.2f\n", resultado);
}

int main ()
{
		int opc=0;
		float parametro_1, parametro_2, resultado;
		
		do{
				menu();
				scanf("%d", &opc);
				switch(opc){
						case SUMA:
								datos(&parametro_1, &parametro_2);
								resultado=suma(parametro_1, parametro_2);								
								impr_res(resultado);
								break;
						case RESTA:
								datos(&parametro_1, &parametro_2);
								resultado=resta(parametro_1, parametro_2);								
								impr_res(resultado);
								break;
						case MULTIPLICACION:
								datos(&parametro_1, &parametro_2);
								resultado=multiplicacion(parametro_1, parametro_2);								
								impr_res(resultado);
								break;
						case DIVISION:
								datos(&parametro_1, &parametro_2);
								resultado=division(parametro_1, parametro_2);								
								impr_res(resultado);
								break;
						case SALIR:
								printf("Hasta luego\n");
								break;
						default:
								printf("Error intenta otra vez\n");
								break;
				}
		}while(opc != 5);
		
		return 0;
}
