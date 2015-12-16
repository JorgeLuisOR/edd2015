#include <stdio.h>

int main(){
 int temp;
 int arreglo[10]={8,4,2,9,6,3,5,7,1,10};
 int b;
 for (b=0;b<11;b++)
 {
	 int i; 
  for (i=0;i<8;i++)
  {
  if (arreglo[i+1]<arreglo[i])
  {
   temp=arreglo[i];
   arreglo[i]=arreglo[i+1];
   arreglo[i+1]=temp;
   
  }
  }
    }
    printf("\nordenamiento por el metodo de burbuja (bubblesort)");
    int x;
 for (x=0;x<9;x++)
 {
  printf("\n%d",arreglo[x]);
 }
 return 0;
}
