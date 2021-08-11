#include <iostream>
#include <conio.h>
using namespace std;
void displayArray(int num[], int size)
{
    for (int i=0; i<=4; i++)
        cout <<num[i]<< " ";
}

int main()
{
 int number[5]= {10,30,20,40,80};
 displayArray(number,5);

    getch();
}
