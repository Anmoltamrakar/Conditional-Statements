//6. Write a C program to read the value of an integer m and
//  display the value 1 when m is larger than 0, 0 when m is 0 and -1
//  when m is less than 0.


#include<stdio.h>


int main()

{

    int m;

    printf("\n\n\t\t Enter a number\n");


    scanf("%d",&m);


    if(m<0)

    printf("\n\n\t\tValue is -1\n");


    if (m==0)
    printf("\n\n\t\tvalue is 0");

    if(m>0)
    printf("\n\n\t\t value is 1");





return 0;
}

