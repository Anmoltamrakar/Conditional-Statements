//15. Write a C program to check whether a triangle can be formed by the
//  given value for the sides. The length of the three
//  sides is given by the user. The triangle inequality states
//  that the sum of the lengths of any two sides of a triangle must be
//  greater than or equal to the length of the third side.


#include <stdio.h>


int main()


{
    int a, b, c;


    printf("\n\n\t\tInput three sides of triangle: ");
    scanf("%d %d %d", &a, &b, &c);



    if(a==b && b==c)
    {
        printf("\n\n\t\tThis is an equilateral triangle.\n");
    }



    else if(a==b || a==c || b==c)
    {
        printf("\n\n\t\tThis is an isosceles triangle.\n");
    }


    else
    {
        printf("\n\n\t\tThis is a scalene triangle.\n");
    }



    return 0;
}
