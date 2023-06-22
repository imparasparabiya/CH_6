#include<stdio.h>
#include<conio.h>

void main()

{
  clrscr();
  int x,y,xy;
  printf("Value of X=");
  scanf("%d",&x);
  printf("Value of Y=");
  scanf("%d",&y);
  xy=(x*x)-(2*x*y)+(y*y);
  printf("Ans.=%d",xy);

  getch();


}