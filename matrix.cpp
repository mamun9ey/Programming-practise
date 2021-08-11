#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main()
{
    int A[3][4];
    cout <<"Enter the element for the matrix" <<endl;

    for (int row=0; row<3; row++)
    {

        for (int col=0; col<4; col++)
        {
          cout << "A ["<<row<<"] ["<<col<<"] = ";
           cin >> A[row][col];
    }
    }

    for (int row=0; row<3; row++)
    {

        for (int col=0; col<4; col++)
        {

            cout << A[row][col] << " ";
        }
        cout <<endl;
    }

    getch();
}
