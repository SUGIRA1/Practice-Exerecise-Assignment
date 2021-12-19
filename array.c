#include <stdio.h>
int main()
{
    int A[10];
    int S, i;
    int * ptr = A;    // The pointer array. 

    printf("Enter size of this array: ");
    scanf("%d", &S);
    printf("Enter elements in array:\n");
    for (i = 0; i < S; i++)
    {
        scanf("%d", ptr);
        ptr++;   
    }
    ptr = A;
    printf("Array elements: ");
    for (i = 0; i < S; i++)
    {
        printf("%d, ", *ptr);
        ptr++;
    }
    return 0;
}
