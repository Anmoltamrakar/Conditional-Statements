//3. Write a C program to check whether a given number is positive or negative.

#include<stdio.h>


int main()


{
    int n;

    printf("\n\n\t\tEnter a number");
    scanf("%d",&n);

    if (n<0)
    {
        printf("\n\n\t\tThe number is a negative number\n");
    }
    else
    {
        printf("\n\n\t\tThe number is a positive number\n");
    }
}
