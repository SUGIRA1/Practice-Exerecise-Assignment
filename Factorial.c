//This program will enable the user to input any positive number and it will generate the Factorial of the number.
#include<stdio.h>  
int main()    
{    
 int i,num;    // Variables Declaration
 int fact=1;   // We initiate the fact with one because the factorial can not be less than zero.
 printf("Please Enter any number: ");    
  scanf("%d",&num);    
    for(i=1;i<=num;i++){    
      fact=fact*i;    
  }    
  printf("The Factorial of %d is: %d",num,fact);    
return 0;  
}   
