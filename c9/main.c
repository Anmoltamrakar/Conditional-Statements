//9. Write a C program to find the eligibility of admission for a
//  professional course based on the following criteria: Marks in
//  Maths >=65 Marks in Phy >=55 Marks in Chem>=50 Total
//  in all three subject >=180 or Total in Math and one Subject >= 140


#include <stdio.h>

int main()
{
    int eli,p,m,c;

    printf("/n/n/t/tEnter your marks in math= ");

    scanf("%f",&m);


    printf("/n/n/t/tEnter your marks in physics= ");
    scanf("%f",&p);


    printf("/n/n/t/tEnter your marks in chemistry= ");

    scanf("%f",&c);

   int mathaphy = m + p;

   int mathachy = m + c;

    if((m>=65 && p>=55 && c >= 50) || (mathachy>=140) || (mathaphy>=140) )
    {
        printf("/n/n/t/tYou are eligible\n");
    }

    else

    {
        printf("/n/n/t/tYou are not eligible\n");
}
}
