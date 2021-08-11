//Write a C program to input all sides of a triangle and check whether triangle is valid or not.
#include<stdio.h>
int main()
{
    float a,b,c;
    printf("enter the side of triangle: ");
    scanf("%f%f%f",&a,&b,&c);
    if((a+b)>c && (b+c)>a && (c+a)>b)
    {
        printf("The triangle is valid\n");
    }
    else
        printf(" The triangle is Not valid\n");
    return 0;
}
