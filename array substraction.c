#include<stdio.h>
#define MAX 20


void    readArray(int a[],int size)
{
    int i;
    for(i=0;i< size;i++)
    {
        printf("Enter %d element :",i+1);
        scanf("%d",&a[i]);
    }
}


void printArray(int a[],int size)
{
    int i;
    for(i=0;i < size; i++)
        printf("%5d",a[i]);
}

/*  function    : subArray(),
    to subtract elements of two arrays.
*/
void subArray(int a[],int b[],int c[],int size)
{
        int i;
        for(i=0; i< size;i++)
                c[i]=a[i]-b[i];
}

int main()
{
    int A[MAX],B[MAX],ADD[MAX],SUB[MAX];
    int i,n;


    printf("\nEnter size of an Array :");
    scanf("%d",&n);

    printf("\nEnter elements of Array 1:\n");
    readArray(A,n);
    printf("\nEnter elements of Array 2:\n");
    readArray(B,n);

    /* subtract two Arrays*/
    subArray(A,B,SUB,n);

    printf("\nArray elements after subtracting :\n");
    printArray(SUB,n);

    printf("\n\n");
    return 0;
}
