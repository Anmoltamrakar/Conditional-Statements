//4. Write a C program to find whether a given year is a leap year or not.
//  Every year that is exactly divisible by four is a leap
//  year, except for years that are exactly divisible by 100,
//  but these centurial years are leap years if they are exactly divisible
//  by 400. For example, the years 1700, 1800, and 1900 are not leap years,
//  but the years 1600 and 2000 are.


#include<stdio.h>


int main()

{
    int x;

    Printf("\n\n\t\tEnter a year \n");
    scanf("%d",&x);

    if (x%4==0)
    {
        printf("it is a leap year\n");
    }


    else
    {
    printf("it is not a leap year \n");
    }
}
