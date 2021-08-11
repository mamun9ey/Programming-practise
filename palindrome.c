#include<stdio.h>
#include<math.h>
int sum;
int main()
{
    int num,i;
    scanf("%d",&num);
    int a=num;
    while(num!=0){
        int rem=num%10;
        num=num/10;
        sum=sum+rem*pow(10,i);
    i++;
    }
    if(a==sum) printf("This number is palindrome");
    else printf("This number is not palindrome");
    return 0;
}
