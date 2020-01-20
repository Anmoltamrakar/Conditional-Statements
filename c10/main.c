//10. Write a C program to calculate the root of a Quadratic Equation.


#include <math.h>


#include <stdio.h>


int main()

{
    double x,y, z, dis, r1, r2, rp, ip;


    printf("\n\n\t\tEnter coefficients a, b and c: ");

    scanf("%lf %lf %lf", &x, &y, &z);
    dis = y * y - 4 * x * z;


    if (dis > 0)

    {
        r1 = (-y + sqrt(dis)) / (2 * x);
        r2 = (-y - sqrt(dis)) / (2 * x);
        printf("root1 = %.2lf and root2 = %.2lf", r1, r2);
    }


    else if (dis == 0)

    {
        r1 = r2 = -y / (2 * x);
        printf("root1 = root2 = %.2lf;", r1);
    }


    else
    {
        rp = -y / (2 * x);
        ip = sqrt(-dis) / (2 * x);
        printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", rp, ip, rp, ip);
    }

    printf("\n");
    return 0;
}
