//22. Write a program in C which is a Menu-Driven Program to compute
//  the area of the various geometrical shape. Which
//  geometrical Shape ?
//  1. Square
//  2. Triangle
//  3. Circle
//  4. Quit
//  You selected Square.
//  Type the length of the side of a Square: 5
//  The area of the square is 25 unit.
//  (Back to the original Screen)


#include <stdio.h>


#define  pi 3.1415


void main ()
{

      int choice,length,radi,x,y,z;
      float area;

      printf("1. Square\n");
      printf("2. Triangle\n");
      printf("3. Circle\n");
      printf("4. Quit");
      printf("Input your choice : ");
      scanf("%d",&choice);
      switch(choice)
      {
           case 1:
                 printf("Type the length of the side of a Square : ");
                 scanf("%d",&length);
                 area=length*length;
                 break;

            case 2:
                  printf("Input the base and hight of the triangle :");
                  scanf("%d%d",&y,&z);
                  area=0.5*y*z;
                  break;

             case 3:
                    printf("Enter the area of  a circle : ");
                    scanf("%d",&radi);
                    area=pi*radi*radi;
                    break;

              case 4:

                    break;

          }
          printf("The area is : %f\n",area);

}
