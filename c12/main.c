//12. Write a C program to read temperature in centigrade and display a
//  suitable message according to temperature state below :
//  Temp < 0 then Freezing weather Temp 0-10 then Very Cold weather
//  Temp 10-20 then Cold weather Temp 20-30 then
//  Normal in Temp Temp 30-40 then Its Hot Temp >=40 then Its Very Hot


#include <stdio.h>


void main()



{


    int tmp;

    printf("\n\n\t\tInput days temperature : ");
    scanf("%d",&tmp);


   if(tmp<0)

             printf("\n\n\t\tFreezing weather.\n");


   else if(tmp<10)

            printf("\n\n\t\tVery cold weather.\n");


    else if(tmp<20)
            printf("\n\n\t\tCold weather.\n");


     else if(tmp<30)
             printf("\n\n\t\tNormal in temp.\n");



   else if(tmp<40)
           printf("\n\n\t\tIts Hot.\n");


    else
        printf("\n\n\t\tIts very hot.\n");



}
