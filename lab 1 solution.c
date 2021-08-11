#include<stdio.h>
#define PI 3.1416
int main()
{
   /*/problem 1
    double fah,cel;
    printf("Enter the farheight temperature");
    scanf("%lf",&fah);
    cel = ((fah-32)/9*5);
    printf("Your celsius temperature is %lf\n",cel);
    /*/
    /*/problem 2(1)
    double r,pi,area;
    printf("Enter the radius: ");
    scanf("%lf",&r);
    area = PI*r*r;
    printf("Area is = %lf\n",area);
    /*/
    //problem 2(2)
    /*/
    double a,b,c;
    double s,area;
    printf("Enter the the input a, b, c\n");
    scanf("%d%d%d",&a,&b,&c);

   if( (a+b)>c && (b+c)>a && (c+a)>b ){
    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
   printf("Your area is %lf\n",area);
       }
     else
    printf("The triangle is not possible\n");

/*/
//probelm 2(3)
/*/
    double length,breath,area;
    printf("Enter length and breath ");
    scanf("%lf%lf",&length,&breath);
     area = 0.5*length*breath;
     printf("area = %lf\n",area);
     return 0;
/*/
//problem 3,4
   /*/
    int meter,feet;
    double inch;
    printf("Enter the meter");
    scanf("%d",&meter);
    inch = meter*39.37;
    printf("total inch = %lf\n",inch);
    feet = inch/12;
     printf("Feet = %d\n",feet);
    inch = inch - (feet*12);
    printf("inch = %lf\n",inch);
    /*/
    //problem 5
    /*/
    int hour,minute,total_minite;
    printf("Enter your hour ");
    scanf("%d",&hour);
    printf("Enter your minute ");
    scanf("%d",&minute);

    total_minite = hour*60 + minute;
    printf("Total minute = %d\n",total_minite);
    /*/
//problem 6
/*/
    int n,ck;
    printf("Enter your number ");
    scanf("%d",&n);
    (n&1) ? printf("odd"): printf("even");
/*/
//problem 7
/*/
  int n,ck;
   printf("Enter your number ");
   scanf("%d",&n);
  ck = (n>0) ? 1 : (n==0) ? 0 : -1;
 printf("ck = %d",ck);
 /*/
 //problem 8
 /*/
 int n;
 printf("Enter a number ");
 scanf("%d",&n);

 printf("%d as value = %c",n,n);
 return 0;
 /*/
   //problem 9
   /*/
   char ch;
 printf("Enter a charcter ");
 scanf("%c",&ch);
 if(ch>='0' && ch<='9')
 printf("This is a digit");
 else if(ch>=65 && ch<=122){
 if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
 printf("This is vowel\n");

 else
 printf("This is consonat\n");
 }
 else
 printf("None\n");
 return 0;
 /*/
//problem 10(1
             /*/
   int x, y, temp;
   printf("Enter the value of x and y: ");
   scanf("%d %d", &x, &y);
   printf("Before swapping x=%d, y=%d ", x, y);

   temp = x;
   x = y;
   y = temp;
   printf("After swapping x=%d, b=%d", x, y);
   /*/
 //problem 10(2)
 /*/
 int a,b;
 printf("Enter two number ");
 scanf("%d%d",&a,&b);
 printf("a = %d b = %d\n",a,b);
 a = a + b;
 b = a - b;
 a = a - b;

 printf("a = %d b = %d\n",a,b);

 return 0
 /*/
return 0;


}
