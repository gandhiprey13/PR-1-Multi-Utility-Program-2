#include<stdio.h>
#include<conio.h>
#define temperature kelvin

void main()
{
  float celsius,fahrenheit;
  clrscr();
  printf("Enter temperature in celsius:");
  scanf("%f",&celsius);
  fahrenheit=(celsius*9/5)+32;
printf("%.2fc is equal to %.2f\n",celsius,fahrenheit);
  getch();
}