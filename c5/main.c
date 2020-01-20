//5. Write a C program to read the age of a candidate and
//  determine whether it is eligible for casting his/her own vote.


#include <stdio.h>

int main()

{
    int x;

    printf("\n\n\t\tEnter your age = \t");

    scanf("%d",&x);


    if(x>=18)
    {
        printf("\n\n\t\tYou are eligible for casting your own vote!!\n");

    }
        else

    {
        printf("\n\n\t\tYou are not eligible for casting your own vote!!\n");
    }

    return 0;
}
