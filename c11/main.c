//11. Write a C program to read roll no,
//  name and marks of three subjects and calculate the total, percentage and division.


#include <stdio.h>


#include <string.h>


void main()


{

    int x,phy,math,eng,total;


    float per;


    char name[20],div[10];
    printf("\n\n\t\tInput the Roll Number of the student :");

    scanf("%d",&x);

    printf("\n\n\t\tInput the Name of the Student :");

    scanf("%s",name);


    printf("\n\n\t\tInput  the marks of Physics, math and Fundamental of IT : ");

    scanf("%d%d%d",&phy,&math,&eng);


    total = phy+math+eng;


    per = total/3.0;
    if

            (per>=60)
     strcpy(div,"First");

    else


    if

            (per<60&&per>=48)
        strcpy(div,"Second");
    else


        if

                (per<48&&per>=36)

            strcpy(div,"Pass");


         else


        strcpy(div,"Fail");

       printf("\nRoll No : %d\nName of Student : %s\n",x,name);
       printf("Marks in Physics : %d\nMarks in Math : %d\nMarks in Fundamental of IT : %d\n",phy,math,eng);
       printf("Total Marks = %d\nPercentage = %5.2f\nDivision = %s\n",total,per,div);
}
