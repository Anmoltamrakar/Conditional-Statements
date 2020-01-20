//20. Write a program in C to read any day number in integer and
//  display day name in the word.


#include <stdio.h>


void main()


{
   int day;
   printf("Input Day No : ");
   scanf("%d",&day);
   switch(day)
   {
    case 1:
           printf("Monday \n");
           break;
    case 2:
           printf("Tuesday \n");
           break;
    case 3:
           printf("Wednesday \n");
           break;
    case 4:
           printf("Thursday \n");
           break;
    case 5:
           printf("Friday \n");
           break;
    case 6:
           printf("Saturday \n");
           break;
    case 7:
           printf("Sunday  \n");
           break;
    default:
           printf("\n\nInvalid day number. \nPlease try again ....\n");
           break;
      }
}
