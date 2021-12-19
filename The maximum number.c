//This program will find the maximum number between two numbers using a pointer. 
#include<stdio.h>
void main()
{
 int a,b;       //Declaring the two numbers 
 int *maxim, *P,*Q;   //Declaring the pointers

printf("Please Enter the values of numbers of a and b :");
scanf("%d%d",&a,&b);
P=&a;
Q=&b;
if(*P>*Q)
maxim=P;
else
maxim=Q;
printf("The maximum number is : %d",*maxim);

}
