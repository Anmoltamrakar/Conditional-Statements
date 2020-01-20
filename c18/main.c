//18. Write a program in C to calculate and print the Electricity bill of a given customer. The customer id., name and unit
//  consumed by the user should be taken from the keyboard and display the total
//  amount to pay to the customer. The charge
//  are as follow :

//  Unit Charge/unit
//  600 and above @2.00
//  If bill exceeds Rs. 400 then a surcharge of 15% will be charged and
//  the minimum bill should be of Rs. 100/-

//  Description
//  E Excellent
//  V Very Good
//  G Good
//  A Average
//  F Fail


#include <stdio.h>


#include <string.h>



void main()


{
   int cus, con;


   float ch, suhg=0, grt,net;


   char connm[25];

   printf("Input Customer ID :");
   scanf("%d",&cus);


   printf("Input the name of the customer :");
   scanf("%s",connm);


   printf("Input the unit consumed by the customer : ");
   scanf("%d",&con);


   if (con <200 )
    ch = 1.20;
   else	if (con>=200 && con<400)
        ch = 1.50;
    else if (con>=400 && con<600)
            ch = 1.80;
        else
            ch = 2.00;
   grt = con*ch;
   if (grt>300)
    suhg = grt*15/100.0;
   net = grt+suhg;
   if (net  < 100)
    net =100;
   printf("\nElectricity Bill\n");
   printf("Customer IDNO                       :%d\n",cus);
   printf("Customer Name                       :%s\n",connm);
   printf("unit Consumed                       :%d\n",con);
   printf("Amount Charges @Rs. %4.2f  per unit :%8.2f\n",ch,grt);
   printf("Surchage Amount                     :%8.2f\n",suhg);
   printf("Net Amount Paid By the Customer     :%8.2f\n",net);

}


