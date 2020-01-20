//17. Write a C program to check whether an alphabet is a vowel or consonant.

//  Unit Charge/unit
//  upto 199 @1.20
//  200 and above but less than 400 @1.50
//  400 and above but less than 600 @1.80


#include <stdio.h>


void main()


{
    char s;


    printf("\n\n\t\tInput any alphabet : ");
    scanf("%c", &s);



    if(s=='a' || s=='e' || s=='i' || s=='o' || s=='u' || s=='A' || s=='E' || s=='I' || s=='O'

|| s=='U')


    {
        printf("\n\n\t\tThe alphabet is a vowel.\n");
    }



    else if((s>='a' && s<='z') || (s>='A' && s<='Z'))
    {
        printf("\n\n\t\tThe alphabet is a consonant.\n");
    }


    else
    {
        printf("\n\n\t\tThe character is not an alphabet.\n");
    }
}
