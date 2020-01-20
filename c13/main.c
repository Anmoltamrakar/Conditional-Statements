//13. Write a C program to check whether a triangle is Equilateral,
//  Isosceles or Scalene. An isosceles triangle has (atleast) two
//  equal sides. Scalene triangle has all three sides of different length.



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
