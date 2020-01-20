//8. Write a C program to accept a coordinate point in a XY coordinate system and
//  determine in which quadrant the coordinate point lies.



#include <stdio.h>



int main()

{
    int x,ord;


    printf("/n/n/t/tEnter x-coordinate= ");


    scanf("%d",&x);

    printf("/n/n/t/tEnter y-coordinate= ");

    scanf("%d",&ord);

    if(x>=0 && ord>=0)

        printf("/n/n/t/tThe given coordinate(%d,%d) lies in first quadrant.\n",x,ord);


    if(x<0 && ord>=0)

        printf("/n/n/t/tThe given coordinate(%d,%d) lies in second quadrant.\n",x,ord);


        if(x<0 && ord<0)

            printf("/n/n/t/tThe given coordinate(%d,%d) lies in third quadrant.\n",x,ord);

    if(x>=0 && ord<0)

        printf("/n/n/t/tThe given coordinate(%d,%d) lies in fourth quadrant.\n",x,ord);
     return 0;

}
