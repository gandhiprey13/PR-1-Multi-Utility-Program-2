#include<stdio.h>
#include<conio.h>
#define triangle 180

void main()

{
  int angle1,angle2,angle3;
  clrscr();
  printf("enter first angle1");
  scanf("%d",&angle1);
  printf("enter second angle2");
  scanf("%d",&angle2);
 angle3 = 180 -( angle1 + angle2);
  printf("\n third angle :%d",angle3);
  getch();
}