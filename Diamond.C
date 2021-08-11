#include <stdio.h>
#include <conio.h>
void main()
{
int a,b,c,d,f,g,h;
clrscr();
printf("Enter no of rows\n");
scanf("%d",&a);
for(b=1;b<=a;b++)
{
for(c=a;c>=b;c--)
printf(" ");
for(d=1;d<=b;d++)
printf("A ");
printf("\n");
}
for(f=a;f>=1;f--)
{
for(g=f;g<=a;g++)
printf(" ");
for(h=1;h<=f;h++)
printf("B ");
printf("\n");
}
getch();
}