#include <stdio.h>
int main()
{
 int t,a,b,sum=0,d;
   scanf("%d", &t);
   for(d=1; d<=t; d++)
   {
        scanf("%d%d", &a, &b);
        sum=a+b;
        printf("Case %d: %d\n",d,sum);
   }
   return 0;
}
