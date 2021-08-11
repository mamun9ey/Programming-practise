#include <stdio.h>
int main()
{
  int row, col;
  for(row=4;row>=1;row--)
  {
    for(col=0;col<=row;col++)
    {
      printf("%d",col%2);
    }
    printf("\n");
  }
  return 0;
}
