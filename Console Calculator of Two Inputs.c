#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

//This is A type of menu triven programe


int main()
{
    while(1)
{

    int A,B,X;

    system("cls");
    printf("\t\t\t\t\t\t\tWelcone!!");
    printf("\n1. Addition");
    printf("\n2. Substraction");
    printf("\n3. Multiplication");
    printf("\n4. Division");
    printf("\n5. Exit");
    printf("\nEnter Your Choice:- ");
    scanf("%d",&X);
    switch(X)
    {
        case 1:
            printf("Enter Numbers :- \n");
            printf("A= ");
            scanf("%d",&A);
            printf("B= ");
            scanf("%d",&B);
            printf("The sum is :- %d",A+B);
            break;

        case 2:
            printf("Enter Numbers :- \n");
            printf("A= ");
            scanf("%d",&A);
            printf("B= ");
            scanf("%d",&B);
            printf("The Difference is :- %d",A-B);
            break;

        case 3:
            printf("Enter Numbers :- \n");
            printf("A= ");
            scanf("%d",&A);
            printf("B= ");
            scanf("%d",&B);
            printf("The Multiplication is :- %d",A*B);
            break;

        case 4:
            printf("Enter Numbers :- \n");
            printf("A= ");
            scanf("%d",&A);
            printf("B= ");
            scanf("%d",&B);
            printf("The Quotient is :- %d",A/B);
            break;

        case 5:
            exit(0);


        default:
            printf("Invalid Choice");


    }

       getch();
    }

}
