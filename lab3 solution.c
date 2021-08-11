#include <stdio.h>
#include <stdlib.h>

int main()
{
    // program 01
/*/
    int n,m,l=0,mod=0;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    m=n;
    while(n!=0){
      mod=mod*10;
    mod=mod+n%10;
    n=n/10;
      }

      if (mod == m)
    printf("%d is a palindrome number.\n", m);
    else
    printf("%d isn't a palindrome number.\n", m);
/*/
    // program 02
/*/
    int f1=1,f2=1,n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
      printf("%d \n",fibo(i));
    }
/*/
    // program -03
/*/
    int n=5,l=1;
    while(n!=1){
      if(n%2==0) n=n/2;
    else n=3*n+1;
    l++;
    }
    printf("%d",l);
/*/
    // program -04
    /*/
    int n, row, col;
    printf("enter a value : ");
    scanf("%d",&n);

    for(row=1; row<=n; row++)
    {
      if(row%2!=0){
        for(col=0; col<row; col++)
    {
      if(col%2==0)
        printf("AA");
      else
    printf("BB");
    }

    }
    else{
      for(col=0; col<row; col++)
    {
        if(col%2==0)
            printf("BB");
            else
        printf("AA");
     }
     }
    printf("\n");
     }

/*/
     //program -05
/*/
     int i, j, num, Prime,sum=1;
     printf("Enter any number: ");
     scanf("%d", &num);

     printf("All Prime Factors  of %d : \n", num);
     for(i=2; i<=num; i++)
     {
         if(num%i==0)
         {
             Prime = 1;
             for(j=2; j<=i/2; j++)
             {
                 if(i%j==0)
                 {
                     Prime = 0;
                     break;
                 }
             }
             if(Prime==1)
             {
                 printf("%d, ", i);
                 sum=sum*i;
         }
         }
     }
     printf("the result is: %d",sum);*/
/*/
    // program 06
/*/
    for(int i=0; i<=16; i++)
    {
        printf("\nBinary number :: ");
        convert(i, 2);
        printf("\t");
        printf("\nOctal number :: ");
        convert(i, 8);
        printf("\t");
        printf("\nHexadecimal number :: ");
        convert(i, 16);
        printf("\n");
    }



    // program 07
/*/
    #include <stdio.h>
    int main()
    {
        int n1,n2,sum=0,sum1=0,i;
        scanf("%d %d",&n1,&n2);
        for(i=1;i<=n1/2;i++)
        {
            if(n1%i==0)
            sum=sum+i;
        }
        for(i=1;i<=n2/2;i++)
        {
            if(n2%i==0)
            sum1=sum1+i;
        }
        if(sum==n2&&sum1==n1)
        {
            printf("amicable");
        }
        else
         printf("Not amicable");
        return 0;

    }

/*/
  //program-8
/*/

   int n, row, col;
     printf("enter a value : ");
    scanf("%d",&n);

    for(row=1; row<=n; row++)
    {
        for(col=1; col<=n-row; col++)
        {
            printf(" ");
        }

        for(col=1; col<=row; col++)
        {
            printf("%d",col);
        }
        for(col=row-1; col>=1; col--)
        {
            printf("%d",col);
        }

        printf("\n");
    }


    for(row=(n-1); row>=1; row--)
    {
        for(col=1; col<=n-row; col++)
        {
            printf(" ");
        }

        for(col=1; col<=row; col++)
        {
            printf("%d",col);
        }
        for(col=row-1; col>=1; col--)
        {
            printf("%d",col);
        }

        printf("\n");
    }



/*/

    return 0;


    }

