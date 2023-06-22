#include<stdio.h>
#include<conio.h>

void main()

{


  int x,y,z;
  clrscr();
  printf("Formula:-  (x-y)^3 = (x*x*x)-(y*y*y)-((3*x*y)*(x+y))\n");
  printf("Enter of Value X=");
  scanf("%d",&x);
  printf("Enter of Value Y=");
  scanf("%d",&y);
  z=(x*x*x)-(y*y*y)-((3*x*y)*(x+y));
  printf("(x-y)^3=%d",z);
  getch();

}