#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int p1(int);

int main()
{
    int n, r,p,x;
    printf("Enter The Value of N: ");
    scanf("%d",&n);
    printf("\nEnter the value of r: ");
    scanf("%d",&r);
    if ( n < r || n <0 )
     {
         printf ("\n""Invalid Input"" n must be greater then r and positive and n can't be a fraction number no.");
         return 1;
     }
    else
    {

    x = p1(n)/p1(n-r);
    printf("\nThe Total number of way are %d",x);
    getch();

    return 0;
    }
}

int p1(int n)
{
    int s =1,i;
    for (i=1;i<=n;i++)
       s=s*i;

    return s;
}

