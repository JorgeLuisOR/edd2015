#include <stdio.h>
#include <stdlib.h>

double res;

double numeroscatalan(double n){
        if(n==0){
        return 0;
        }

        if(n<0){
        return(2*((2*n)-1))/(n+1)*numeroscatalan(n-1);
        printf("Numero: %lf",n);
        }
        
}
        int main(){
		double n;
        printf("\n Numeros de Catalan \n");
        printf("Numero: ");
        scanf("%lf",&n);
        res=numeroscatalan(n);
        printf("Catalana: %lf",res);
        return 0;
        }
