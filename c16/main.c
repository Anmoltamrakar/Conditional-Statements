//16. Write a C program to check whether a character is an alphabet,
//  digit or special character.


#include <stdio.h>

int main()
{
    char x;


    printf("\n\n\t\tEnter any character: ");
    scanf("%c", &ch);



    if((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z'))
    {
        printf("'%c' is alphabet.", ch);
    }


    else if(x >= '0' && x <= '9')
    {
        printf("'%c' is digit.", ch);
    }



    else
    {
        printf("'%c' is special character.", ch);
    }

    return 0;
}
