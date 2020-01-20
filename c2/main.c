//2. Write a C program to check whether a given number is even or odd.


#include<stdio.h>


int main()

{
    int n;

    printf("\n\n\t\tEnter a numbers\n");

    scanf("%d",&n);


    if (n%2==1)
    {
        printf("\n\n\t\tIt is a odd number\n");

    }
    else
    {
        printf("\n\n\t\tIt is a even number\n");
    }

    return 0;
}
