//7. Write a C program that asks for three values from the user and
//  prints the largest of three numbers.


#include <stdio.h>


int main()


{


   int x,y,z,i,j;

    printf("\n\n\t\tEnter first number= ");
    scanf("%d",&x);

    printf("\n\n\t\tEnter second number= ");
    scanf("%d",&y);

    printf("\n\n\t\tEnter third number= ");
    scanf("%d",&z);

    int num[3] ={x,y,z};

   for(i=0;i<3;i++)

    {
            if(num[0]<num[i]) num[0] =num[i];
    }



    printf("\n\n\t\tThe largest of three is %d\n",num[0]);

}

