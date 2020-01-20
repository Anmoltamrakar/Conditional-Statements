//14. Write a C program to check whether a triangle can be formed by
//  the given value for the angles. The three angles is given by the user.

#include <stdio.h>

void main()


{
    int a, b, c, sum;



    printf("\n\n\t\tInput three angles of triangle : ");
    scanf("%d %d %d", &a, &b, &c);




    sum = a + b + c;




    if(sum == 180)
    {
        printf("The triangle is valid.\n");
    }


    else
    {
        printf("The triangle is not valid.\n");
    }


 }
