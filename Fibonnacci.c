#include<stdio.h>
/*int main()
{

   int a=0,b=1,i=1;
   printf("F%d = %d\n",i,b);
   for(int i=2;i<=10;i++){
    int c=a+b;
    a=b;b=c;
    printf("F%d = %d\n",i,c);

   }
    return 0;
}*/
int fib(int a)
{
    if(a==0 || a==1) return a;
    else
        return fib(a-1)+fib(a-2);
}
int main()
{
    int num;
    scanf("%d",&num);
    for(int i=0;i<=num;i++){
        printf("F%d = %d\n",i,fib(i));
    }
    return 0;
}



