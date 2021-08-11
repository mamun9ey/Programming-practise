#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    while (1){
        int guessNumber,randNumber;
cout << "Enter your guess between 1 to 5 :";
cin >> guessNumber;
randNumber = 1 + rand()%5;

if (guessNumber==randNumber)
{

    cout << "you have won"<<endl<<endl;
}
else {
    cout << "you have lost . try again "<<endl;
    cout <<"Random number was :"<<randNumber<<endl<<endl;
}

    }

    getch();
}
