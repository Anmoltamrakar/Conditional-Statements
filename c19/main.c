//19. Write a program in C to accept a grade and declare the equivalent description Grade


#include <stdio.h>

int main()

{

int num;


printf("\n\n\t\tEnter your mark ");
scanf("%d",&num);


printf("\n\n\t\t You entered %d", num);

if(num >= 80)

{
        printf(" \n\n\t\tYou Grade ia A");
                }



                else if( num >=60)

                    {
                printf(" \n\n\t\tYour Grde is B");
                        }


                else if ( num >=40)
                    {
                printf("\n\n\t\t Your Grade is C");
                        }


                else if ( num < 40)
                        {
                printf(" \n\n\t\tYour Grade is E");
                        }
return 0;
}
