// C program to read Student records
// like id, name and age,
// and display them in sorted order by Name
/*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// struct person with 3 fields
struct Student {
    char* name;
    int id;
    char age;
};

// setting up rules for comparison
// to sort the students based on names
int comparator(const void* p, const void* q)
{
    return strcmp(((struct Student*)p)->name,
                  ((struct Student*)q)->name);
}

// Driver program
int main()
{
    int i = 0, n = 5;

    struct Student arr[n];

    // Get the students data
    arr[0].id = 1;
    arr[0].name = "bd";
    arr[0].age = 12;

    arr[1].id = 2;
    arr[1].name = "ba";
    arr[1].age = 10;

    arr[2].id = 3;
    arr[2].name = "bc";
    arr[2].age = 8;

    arr[3].id = 4;
    arr[3].name = "aaz";
    arr[3].age = 9;

    arr[4].id = 5;
    arr[4].name = "az";
    arr[4].age = 10;

    // Print the Unsorted Structure
    printf("Unsorted Student Records:\n");
    for (i = 0; i < n; i++) {
        printf("Id = %d, Name = %s, Age = %d \n",
               arr[i].id, arr[i].name, arr[i].age);
    }
    // Sort the structure
    // based on the specified comparator
    qsort(arr, n, sizeof(struct Student), comparator);

    // Print the Sorted Structure
    printf("\n\nStudent Records sorted by Name:\n");
    for (i = 0; i < n; i++) {
        printf("Id = %d, Name = %s, Age = %d \n",
               arr[i].id, arr[i].name, arr[i].age);
    }

    return 0;
}
/*/
/*/
#include <stdio.h>

struct Distance {
   int feet;
   float inch;
} d1, d2, result;

int main() {
   // take first distance input
   printf("Enter 1st distance\n");
   printf("Enter feet: ");
   scanf("%d", &d1.feet);
   printf("Enter inch: ");
   scanf("%f", &d1.inch);

   // take second distance input
   printf("\nEnter 2nd distance\n");
   printf("Enter feet: ");
   scanf("%d", &d2.feet);
   printf("Enter inch: ");
   scanf("%f", &d2.inch);

   // adding distances
   result.feet = d1.feet + d2.feet;
   result.inch = d1.inch + d2.inch;

   // convert inches to feet if greater than 12
   while (result.inch >= 12.0) {
      result.inch = result.inch - 12.0;
      ++result.feet;
   }
   printf("\nSum of distances = %d\'-%.1f\"", result.feet, result.inch);
   return 0;
}
/*/
/*/
#include<stdio.h>

int compare_string(char*, char*);

main()
{
    char first[100], second[100], result;

    printf("Enter first string\n");
    gets(first);

    printf("Enter second string\n");
    gets(second);

    result = compare_string(first, second);

    if ( result == 0 )
       printf("Both strings are same.\n");
    else
       printf("Entered strings are not equal.\n");

    return 0;
}

int compare_string(char *first, char *second)
{
   while(*first==*second)
   {
      if ( *first == '\0' || *second == '\0' )
         break;

      first++;
      second++;
   }
   if( *first == '\0' && *second == '\0' )
      return 0;
   else
      return -1;
}
/*/
/*/
#include <stdio.h>
#include <conio.h>
#include <alloc.h>
void main()
{
	int n,*p,i,j,temp;
	clrscr();
	printf("\nHOW MANY NUMBER: ");
	scanf("%d",&n);
	p=(int *) malloc(n*2);
	if(p==NULL)
	{
		printf("\nMEMORY ALLOCATION UNSUCCESSFUL");
		exit();
	}
	for(i=0;i<n;i++)
	{
		printf("\nENTER NUMBER %d: ",i+1);
		scanf("%d",p+i);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(*(p+i)<*(p+j))
			{
				temp=*(p+i);
				*(p+i)=*(p+j);
				*(p+j)=temp;
			}
		}
	}
	printf("\nTHE SORTED NUMBERS ARE:\n");
	for(i=0;i<n;i++)
		printf("%d ",*(p+i));
	getch();
}
/*/
