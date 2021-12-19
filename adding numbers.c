//This program adds two numbers using pointers
#include <stdio.h>
int main()
{
   int num1, num2;      // Variables declaration
   int *X, *Y; 
   int Sum;

   printf("Pleae Enter the two numbers you want to add: \n");
   scanf("%d%d", &num1, &num2);

   X = &num1;
   Y = &num2;

   Sum = *X + *Y;

   printf("The Sum of the two numbers is:  %d\n", Sum);

   return 0;
}
