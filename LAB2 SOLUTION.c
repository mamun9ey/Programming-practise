#include <stdio.h>
#include <stdlib.h>

int main()
{
    //problem 1
/*/
    int n1, n2, i, gcd;

    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);

    for(i=1; i <= n1 && i <= n2; ++i)
    {
        // Checks if i is factor of both integers
        if(n1%i==0 && n2%i==0)
            gcd = i;
    }

    printf("G.C.D of %d and %d is %d", n1, n2, gcd);
/*/
//Program 2: *//
/*/
    char ch;
    printf("Enter any Character: ");
    scanf("%c",&ch);
    switch(ch)
    {
    case 'A':
    case 'a':
      printf("Action movie fan\n");
       break;
    case 'C':
    case 'c':
       printf("Comedy movie fan\n");
        break;
    case 'D':
    case 'd':
      printf("Drama movie fan\n");
        break;
    default:
        printf("invalid choice\n");
    }
/*/
//problem 3
/*/
    char ch;
    int ascii_value,quitNumber;

    while(quitNumber!=-1)
    {
       scanf("%c",&ch);
      if(quitNumber==ch)
      {
         break;
     }
      ascii_value=ch;

if(ascii_value>=48 && ascii_value<=57)
     {
        printf("Character is Degit");
    }
    else if((ascii_value>=65 && ascii_value<=90)||(ascii_value>=97 && ascii_value<=122))
    {
        switch(ascii_value)
       {
       case 65:
      case 69:
      case 73:
      case 79:
      case 85:
      case 97:
      case 101:
     case 105:
     case 111:
     case 117:
         printf("Chracter Is Vowel");
         break;
     default:
         printf("Chracter Is Consonant");
     }
    }

    else
    {
        printf("Digit Or neither");
    }

    }
/*/
//* program 4*//
/*/
    double a, b, c, discriminant, root1, root2, realPart, imagPart;
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
discriminant = b * b - 4 * a * c;
    if (discriminant > 0) {
      root1 = (-b + sqrt(discriminant)) / (2 * a);
     root2 = (-b - sqrt(discriminant)) / (2 * a);
     printf("root1 = %.2lf and root2 = %.2lf", root1, root2);
    }
    else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("root1 = root2 = %.2lf;", root1);
    }
    else {
        realPart = -b / (2 * a);
       imagPart = sqrt(-discriminant) / (2 * a);
      printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", realPart, imagPart, realPart, imagPart);
    }
    /*/
    //* Program 5*//
/*/
    long long n,factorial=1;
    scanf("%d",&n);
    label:
    factorial*=n;
    n--;
    if(n!=0) goto label;
    printf("%d",factorial);
/*/
    //* Program 6*//
/*/
    int x,y;
    scanf("%d%d",&x,&y);

    if(x==0 ||y==0)
    {
       if(x==0 && y>0)
       {
           printf("Quadart 2");
      }
     else if(x==0 && y<0)
      {
          printf("Quadart 3");
      }
      else if(y==0 && x>0)
      {
         printf("Quadart 1");
     }
     else if(y==0 && x<0)
     {
         printf("Quadart 4");
     }
     else
     {
         printf("Quadart 0");
     }
    }
    else
    {
        if(x>0 &&y>0)
       {
           printf("Quadart 1");
       }
       else if(x>0 && y<0)
      {
           printf("Quadart 4");
      }
      else if(x<0 && y>0)
     {
         printf("Quadart 2");
     }
     else if(x<0 && y<0)
     {
         printf("Quadart 3");
     }
    }
/*/

    // program 7
/*/
    int n;
 printf("Enter the height ");
 scanf("%d",&n);
 for(int row = 1;row<= n;row++){
 for(int j=row-1;j>=0;j--){
 printf("%d ",j%2);
}
 printf("\n");
 }
/*/
//problem 8
/*/
    int num,binary=0,i=1,value;
    printf("Enter your decimal number: ");
    scanf("%d",&num);
    value=num;
    while(num!=0){
        int rem=num%2;
        num=num/2;
        binary=binary+(rem*i);
        i=i*10;
    }
    printf("Binary number = %d\n",binary);
/*/
//problem 9
/*/
   int low, high, i, flag;
   printf("Enter two numbers(intervals): ");
   scanf("%d %d", &low, &high);
   printf("Prime numbers between %d and %d are: ", low, high);

   // iteration until low is not equal to high
   while (low < high) {
      flag = 0;

      // ignore numbers less than 2
      if (low <= 1) {
         ++low;
         continue;
      }

      // if low is a non-prime number, flag will be 1
      for (i = 2; i <= low / 2; ++i) {

         if (low % i == 0) {
            flag = 1;
            break;
         }
      }

      if (flag == 0)
         printf("%d ", low);

      // to check prime for the next number
      // increase low by 1
      ++low;
   }
/*/
// program 10
/*/
     int digit,sum=0;
     scanf("%d",&digit);
     while(digit!=0){
         sum=sum+(digit%10);
         digit=digit/10;
     }
    printf("%d",sum);
/*/
    // program 11
/*/
    int digit,sum=0,mod,number2;
    scanf("%d",&digit);
    number2=digit;
    while(digit!=0)
    {
        int fact=1;
        mod=digit%10;
        for(int i=mod; i>0; i--)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        digit=digit/10;
    }
    if(number2==sum)
    {
        printf("Strong Number");
    }
    else
    {
        printf("Not Strong Number");
    }



/*/

    return 0;


    }

