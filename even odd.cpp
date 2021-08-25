#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main()
{
 int sum =0,n;
 cout << "Enter the last  number :";
 cin >> n;
 for (int i =1; i<=n; i=i+2)
 {
     sum = sum + pow(i,5);

 }
 cout <<sum;

    getch();
}
