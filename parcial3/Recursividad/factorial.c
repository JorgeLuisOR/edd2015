#include <stdlib.h>
#include <stdio.h>


int factorial (int numero) {
	if ( numero ==  0 )
		return 1;

	return numero * factorial(numero -1);
}

int main(){
	int numero;
	printf("Ingrese un numero para devolver su factorial\n");
	scanf("%d",&numero);
	printf("Factorial %d\n",factorial(numero));
	return 0;
}
