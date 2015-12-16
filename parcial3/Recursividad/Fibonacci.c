#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n)
{
  if (n>2){
	  printf("caso 1 ");
    return fibonacci(n-1) + fibonacci(n-2);
}
  if (n==2){
	  printf("caso 2 ");
    return 1;
}
  if (n==1)  { 
	  printf("caso 3 ");    
    return 1;
}
  if (n==0){
  printf("caso 4 ");
    return 0;
}
}

int main(void)
{
    int num;

    for (num=0; num<=6; num++)
    {
	 printf("%d\n", fibonacci(num));
    }
 
  system("PAUSE");     
  return 0;
}
