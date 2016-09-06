#include <stdio.h>
#include <stdlib.h>

/* Code exemplo for a Factorial 
   Developer to: Rodolfo Póvoa Leal
*/

int fat(int n)
{


   if((n==0) || (n==1))
   {
       return 1;
   }
   else
   {
       return fat(n-1)*n;
   }

}

int main(int argc, char *argv[])

{
	int n;
	printf("Enter to the number: \n");
	scanf("%d", &n);
	printf("The factorial is %d \n", fat(n));

}
