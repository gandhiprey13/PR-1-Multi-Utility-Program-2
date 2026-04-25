#include<stdio.h>
#include<conio.h>
#define gross salary

void main()
{
   float basic, HRA, DA,TA,gross;
   clrscr();
   printf("enter basic salary");
   scanf("%f",&basic);
   HRA = basic * 0.1;
   TA= basic* 0.05;
   DA= basic* 0.08;
   gross= basic + HRA + DA +TA;
   printf("\nsalary slip");
   printf("\nBasic salary : %.2f",basic);
   printf("\nHRA salary : %.2f",HRA);
   printf("\nDA salary : %.2f",DA);
   printf("\nTA salary : %.2f", TA);
   printf("\nGross salary : %.2f",gross);
   getch();
}