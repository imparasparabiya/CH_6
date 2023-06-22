#include<stdio.h>
#include<conio.h>
main()
{

  float x,y,formula;
  clrscr();

  printf("Enter a Value X=");
  scanf("%f",&x);
  printf("Enter a Value Y=");
  scanf("%f",&y);
  formula=(x*x*x)+((3*x*y)*(x+y))+(y*y*y);
  printf("(x+y)^3=%f",formula);

  getch();


}